#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>

typedef struct GrayImage
{
	unsigned char *data;
	int width, height;
}
GrayImage;

GrayImage createImage(int width, int height)
{
	GrayImage g;
	unsigned char *p;

	/* Allocates memory for the canvas of image filled with zeros. */
	p = calloc(width, height);
	if(p == NULL)
	{
		fprintf(stderr, "Memory allocation failure. Terminate.\n");
		exit(1);
	}

	/* Sets all fields of the struct GrayImage. */
	g.data = p;
	g.width = width;
	g.height = height;

	return g;
}

void saveImageAsPGM(const GrayImage *I, const char *fn)
{
	FILE *fp;

	assert(I != NULL);
	assert(fn != NULL);

	fp = fopen(fn, "wb");
	fprintf(fp, "P5\n%d %d\n255\n", I->width, I->height);
	fwrite(I->data, I->width, I->height, fp);
	fclose(fp);
}

typedef struct Turtle
{
	int x, y;      // location
	int direction; // 0: north (-y), 1: east (+x), 
	               // 2: south (+y), 3: west (-x)
	int pen;       // color in 0--255
}
Turtle;

void move(Turtle *t, int n, GrayImage *I)
{
	int dx = 0, dy = 0;
	int i;

	if(t->direction == 0) dy = -1;
	if(t->direction == 1) dx = +1;
	if(t->direction == 2) dy = +1;
	if(t->direction == 3) dx = -1;

	for(i = 0; i < n; ++i)
	{
		t->x += dx;
		t->y += dy;
		I->data[(t->x) + (t->y) * (I->width)] = t->pen;
	}
}

void turnRight(Turtle *t)
{
	++(t->direction);
	if(t->direction == 4)  t->direction = 0;
}

void turnLeft(Turtle *t)
{
	--(t->direction);
	if(t->direction == -1)  t->direction = 3;
}

int main(int argc, char **argv)
{
	Turtle t;
	GrayImage I;
	int width = 640, height = 480;
	int i;
	int j;
	int k;

	I = createImage(width, height);

	// Sets up the turtle
	t.x = width / 2;
	t.y = height / 2;
	t.pen = 255; // white
	t.direction = 0; // north

	for(i = 1; i < argc; ++i)
	{
		printf("Turtle at (%d, %d) #%d\n", t.x, t.y, t.pen);
		printf("Command: %s\n", argv[i]);

		if(strcmp(argv[i], "pen") == 0)
		{
			++i;
			sscanf(argv[i], "%d", &(t.pen));
		}
		else if(strcmp(argv[i], "move") == 0)
		{
			int n;
			++i;
			sscanf(argv[i], "%d", &n);
			move(&t, n, &I);
		}
		else if(strcmp(argv[i], "right") == 0)  turnRight(&t);
		else if(strcmp(argv[i], "left") == 0)  turnLeft(&t);
		else if(strcmp(argv[i], "goto") == 0)
		{
			int nx;
			int ny;
			++i;
			sscanf(argv[i], "%d", &nx);
			t.x = nx;
			++i;
			sscanf(argv[i], "%d", &ny);
			t.y = ny;
		}
		else if(strcmp(argv[i], "repeat") == 0)
		{
			++i;
			sscanf(argv[i], "%d", &j);
			k = i + 1;
		}
		else if(strcmp(argv[i], "end") == 0)
		{
			if(j > 1)
			{
				i = k - 1;
				--j;
			}
			else
			{
			}
		}
		else
		{
			fprintf(stderr, "Unknown command. Stop.\n");
			return 1;
		}
	}

	printf("Turtle at (%d, %d) #%d --STOP\n", t.x, t.y, t.pen);

	saveImageAsPGM(&I, "output.pgm");

	return 0;
}

