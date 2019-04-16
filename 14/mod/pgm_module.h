#ifndef PGM_MODULE_H_INCLUDED
#define PGM_MODULE_H_INCLUDED

/* このヘッダファイルを解析するのに必要なヘッダ以外は include しない */

typedef struct
{
	unsigned char *values;
	int width, height;
}
GrayImage;

/* save image as PGM */
void savePGM(GrayImage img, const char *filename);

#endif /* PGM_MODULE_H_INCLUDED */

