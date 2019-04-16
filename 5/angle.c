#include <stdio.h>

int main(void)
{
  double a;

  printf("Input angle [deg]: ");
  scanf("%lf", &a); /*エルエフであることに注意*/

  // a >= 360 の場合の正規化
  while(a >= 360)
  {
    a -= 360;
  }

  // a < 360 の場合の正規化
  while(a < 0)
  {
    a += 360;
  }

  printf("Normalized angle is %f\n", a);

  return 0;
}
