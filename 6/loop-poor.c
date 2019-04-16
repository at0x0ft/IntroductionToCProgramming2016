//累積誤差のない良くないループ
#include <stdio.h>

int main(void)
{
  double i;

  for(i = 0; i < 1.0; i += 0.1)
  {
    printf("%.20f", i);
  }

  return 0;
}
