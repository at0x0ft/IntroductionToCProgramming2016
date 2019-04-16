#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Turtle
{
	int x, y;      // location
	int direction; // 0: north (-y), 1: east (+x), 
	               // 2: south (+y), 3: west (-x)
	int pen;       // color in 0--255
}
Turtle;

void move(Turtle *t, int n)
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
	}
}

void turnRight(Turtle *t)
{
	++(t->direction);
	if(t->direction == 4)  t->direction = 0;
}

int main(int argc, char **argv)
{
	Turtle t;
	int width = 640, height = 480;
	int i;

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
			move(&t, n);
		}
		else if(strcmp(argv[i], "right") == 0)  turnRight(&t);
		else
		{
			fprintf(stderr, "Unknown command. Stop.\n");
			return 1;
		}
	}

	printf("Turtle at (%d, %d) #%d --STOP\n", t.x, t.y, t.pen);

	return 0;
}
