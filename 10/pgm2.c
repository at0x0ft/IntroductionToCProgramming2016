#include <stdio.h>
#include <string.h>

int main(void)
{
  int w = 32, h = 32;              // size of image
  int x, y, i;                     // loop counter
  char fname[256];                 // image name
  FILE *fp;
  unsigned char image[h][w];

  // (a) Clear by zeros
  memset(image, 0, w*h);
  // 以下の処理と同じ
  /*
  for(y = 0; y < h; ++y)
  {
    for(x = 0; x < w; ++x)
    {
      image[h][w] = 0;
    }
  }
  */

  // (b) Create some images
  for(i = 0; i < 20; ++i)
  {
    // (b-1) Draw a line x = i
    for(y = 0; y < h; ++y)
    {
      image[y][i] = 255;
    }

    // (b-2) Generate a file
    sprintf(fname, "image-%02d.pgm", i);

    // (b-3) Open a file in write mode
    fp = fopen(fname, "w");
    // (b-4) Error check
    if(fp == NULL)
    {
      printf("Can't open a file %s!!\n\n", fname);
      return 1;
    }

    // (b-5) Write header
    fprintf(fp, "P2\n%d %d\n255\n", w, h);

    // (b-6) Write pixels
    for(y = 0; y < h; ++y)
    {
      for(x = 0; x < w; ++x)
      {
        fprintf(fp, "%d ", image[y][x]); // %d 後ろの空白は区切りのために必要
      }
    }

    // (b-7) Close the file
    fclose(fp);
  }

  return 0;
}
