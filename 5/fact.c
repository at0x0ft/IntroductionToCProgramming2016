#include <stdio.h>

int main(void)
{
  int m = 10;
  int factorial = 1;
  int n;

  for(n = 1; n <= m; ++n)
  {
    factorial *= n;
    printf("%d! = %d\n", n, factorial);
  }

  return 0;
}
