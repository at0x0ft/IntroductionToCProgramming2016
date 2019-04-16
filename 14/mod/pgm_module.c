#include "pgm_module.h"

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

/* save image as PGM */
void savePGM(const GrayImage img, const char *filename)
{
	FILE *fp;

	assert(img.values != NULL);
	assert(filename != NULL);

	/* file open */
	fp = fopen(filename, "wb");
	if(fp == 0)
	{
		fprintf(stderr, "file open error\n");
		exit(1);
	}

	/* output PGM header */
	fprintf(fp, "P5\n%d %d\n255\n", img.width, img.height);
	/* output PGM data */
	fwrite(img.values, 1, img.width*img.height, fp);

	fclose(fp);
}

