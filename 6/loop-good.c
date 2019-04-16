//累積誤差のない良いループ
#include <stdio.h>

int main(void)
{
  int i;

  for(i = 0; i < 10; ++i)
  {
    printf("%f", i*0.1);
  }

  return 0;
}
