#include <stdio.h>

/** n の階乗を再帰関数で計算する */
int fact(int n)
{
  if(n == 1)
  {
    return 1;
  }
  else
  {
    return n*fact(n-1);
  }
}

/** n の階乗をループで計算する */
int fact2(int n)
{
  int m;
  int factorial = 1;

  for(m = 1; m <= n; ++m)
  {
    factorial *= m;
    printf("%d! = %d\n", m, factorial)
  }

  return 0;
}

int main(void)
{
  int n = 10;

  printf("%d! = %d\n", n, fact(n));
  printf("%d! = %d\n", n, fact2(n));

  return 0;
}
