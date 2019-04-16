#include <stdio.h>

int main(void)
{
  double a, b;
  double m;

  printf("Mean calculator. Input two integers.\n\n");
  printf("Integer #1 :");
  scanf("%lf", &a);
  printf("Integer #2 :");
  scanf("%lf", &b);

  m = (a + b) / 2.0;

  printf("Mean of %lf and %lf is %lf.\n", a, b, m);

  return 0;
}
