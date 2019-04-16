#include <stdio.h>
#include <stdlib.h>
#include "pgm_module.h"


int main(void)
{
	int w = 640, h = 480;
	GrayImage img;

	img.width  = w;
	img.height = h;
	/* memory allocation */
	img.values = malloc(w*h);
	if(img.values == 0)
	{
		fprintf(stderr, "memory error\n");
		return 1;
	}


	/* file output */
	savePGM(img, "sample.pgm");

	free(img.values);
	return 0;
}

