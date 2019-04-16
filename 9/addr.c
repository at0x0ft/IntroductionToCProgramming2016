#include <stdio.h>

int main(void)
{
  int x, array[3];
  double val;
  int *p =array;

  printf("x is at %p, %zu bytes\n", &x, sizeof(x)); // (1)
  printf("array is at %p, %zu bytes\n", array, sizeof(array)); // (2a) array　には & をつけなくてもよい
  printf("array[0] is at %p, %zu bytes\n", &array[0], sizeof(array[0])); // (2b)
  printf("array[1] is at %p, %zu bytes\n", &array[1], sizeof(array[1])); // (2c)
  printf("val is at %p, %zu bytes\n", &val, sizeof(val)); // (3)
  printf("p is at %p, %zu bytes\n", p, sizeof(p)); // (4) p には & をつけない

  return 0;
}
