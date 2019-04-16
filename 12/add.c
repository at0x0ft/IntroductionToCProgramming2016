#include <stdio.h>
#include <stdlib.h>

int main(int ac, char **av)
{
  double a, b;
  char *c;

  if( (ac-1) != 2 )
  {
    printf("Specify 2 arguments!\n\n");
    return 1;
  }

  a = strtod(av[1], &c);
  if(av[1] == c)
  {
    printf("1st argument is not valid expression for integer\n\n");
    return 1;
  }

  b = strtod(av[2], &c);
  if(av[2] == c)
  {
    printf("2nd argument is not valid expression for integer\n\n");
    return 1;
  }

  printf("%f + %f = %f\n", a, b, a+b);

  return 0;
}
