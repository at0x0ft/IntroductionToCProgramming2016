#include <stdio.h>
#include <math.h>

int main(void)
{
  double x = 1.0, xx , e = 1.0e-5;
  do
  {
    xx = x;
    x = x - (x*x - 2) / (2*x);
  }
  while(fabs(x*x-2) > e)
  {
    x = x - (x*x - 2)/(2*x);

    printf("%.20f\n", x); /* 小数点以下20桁で表示 */
  }

  printf("Square root of 2 is %.20f\n", x);
  printf("The count of loop is %.20f\n", xx);
  return 0;
}
