#include <stdio.h>

int main(void)
{
  int i, j;

  for(i = 1; i <= 9; ++i)
  {
    for(j = 1; j <= 9; ++j)
    {
      printf("1| %2d ", i*j); // dの後の空白は、各数値を区切るために入れている
    }
    printf("\n");
  }

  return 0;
}
