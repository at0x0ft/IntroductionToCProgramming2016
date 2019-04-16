#include <stdio.h>

int main(void)
{
  int w = 8, h = 3; // size of image
  int x, y; // loop counter
  const char *fname = "mini2.pgm"; // image name
  FILE *fp;

  // Open a file in write mode
  fp = fopen(fname, "w");
  // Error check
  if(fp == NULL)
  {
    printf("Can't open a file %s!!\n\n", fname);
    return 1;
  }

  // Write header
  fprintf(fp, "P2\n%d %d\n255\n", w, h);

  // Write pixels
  for(y = 0; y < h; ++y)
  {
    for(x = 0; x < w; ++x)
    {
      // Determine a color
      int val = 1.0 * y / (h-1) * 255;
      if(val > 255) val = 255;

      fprintf(fp, "%d ", val); // %d 後ろの空白は区切りのために必要
    }
  }

  // Close the file
  fclose(fp);

  return 0;
}
