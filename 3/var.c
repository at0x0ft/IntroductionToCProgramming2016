#include <stdio.h>

int main(void)
{
  int x = 100;
  int y;
  double pi = 3.14;

  printf("x = %d\n", x);
  printf("y = %d\n", y);
  printf("pi = %lf\n", pi);

  printf("x + 1 = %d\n", x+1); /*変数を使って計算式を書ける*/
  printf("x squared = %d\n", x*x);

  return 0;
}
