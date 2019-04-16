#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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

void saveImage(const unsigned char *img, int width, int height, const char *filename)
{
	FILE *fp = fopen(filename, "wb");
	if(fp == 0)
	{
		fprintf(stderr, "file open error\n");
		exit(1);
	}

	/* output PGM header */
	fprintf(fp, "P5\n%d %d\n255\n", width, height);
	/* output PGM data */
	fwrite(img, 1, width*height, fp);

	fclose(fp);
}


int main(void)
{
	int w = 320, h = 240;
	const char *fn = "sample.pgm";

	/* memory allocation */
	unsigned char *img = createNewImage(w, h);
	if(img == 0)
	{
		fprintf(stderr, "Cannot create a new image\n");
		return 1;
	}

	/* draw image to img */


	/* file output */
	saveImage(img, w, h, fn);

	free(img);
	return 0;
}

