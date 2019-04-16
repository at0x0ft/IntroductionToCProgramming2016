#include <stdio.h>
#include <stdlib.h>

// width * height の領域を確保してゼロで初期化する
// 確保に失敗した場合は NULL を返す
unsigned char *createNewImage(int width, int height)
{
	int i;
	unsigned char *img = malloc(width*height);
	if(img == NULL)
	{
		return NULL;
	}

	for(i = 0; i < width*height; ++i) img[i] = 0;

	return img;
}


int main(void)
{
	FILE *fp;
	int w = 640, h = 480;

	/* memory allocation */
	unsigned char *img = createNewImage(w, h);
	if(img == 0)
	{
		fprintf(stderr, "Cannot create a new image\n");
		return 1;
	}

	/* draw image to img */


	/* file output */
	fp = fopen("sample.pgm", "wb");
	if(fp == 0)
	{
		fprintf(stderr, "file open error\n");
		return 1;
	}

	/* output PGM header */
	fprintf(fp, "P5\n%d %d\n255\n", w, h);
	/* output PGM data */
	fwrite(img, 1, w*h, fp);

	fclose(fp);

	free(img);
	return 0;
}

