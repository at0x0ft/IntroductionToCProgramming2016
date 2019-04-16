#include <stdio.h>

int main(void)
{
  /*整数の表示*/
  printf("Year %d\n", 2015);
  printf("Year %d\n", 0x7DE); /*16進整数リテラル*/
  printf("Year %04X\n",2015); /*4桁で0が詰められた16進数に変換*/

  /*浮動小数点数の表示*/
  printf("%f\n", 0.1);
  printf("%.30f\n", 0.1);/*小数点以下を30桁で表示*/
  printf("%e\n", 0.1);

  return 0;
}
