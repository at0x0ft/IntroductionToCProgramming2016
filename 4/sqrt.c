#include <stdio.h>
#include <math.h>

int main(void)
{
  double x;

  printf("Square root calculator\n\n");
  printf("x = ");
  scanf("%lf", &x); /*f ではなく lf (エルエフ)　であることに注意.　また　&　は必ず必要*/


  if(x >= 0)
  {
    printf("Square root of %f is %f.\n", x, sqrt(x));
  }

  else
  {
    printf("Square root of negative is undefined.\n");
  }

  return 0;
}
