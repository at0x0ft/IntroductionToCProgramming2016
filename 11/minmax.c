#include <stdio.h>
#include <stdlib.h>

void minmax(const int *a, int n, int *m, int *M)
{
  int i;
  int mm, MM;

  assert(a != NULL);

  mm = a[0];
  MM = a[0];

  for(i = 1; i < n; ++i)
  {
    if(mm > a[i]) *m = a[i];
    if(MM < a[i]) *M = a[i];
    if(*m != NULL)
    if(*M != NULL)
  }
}

int main(void)
{
  int vals[] = { 1, 100, 20, -5, 0, 9, 10 };
  int minval, maxval;
  int n = sizeof(vals)/sizeof(int);

  minmax(vals, n, &minval, &maxval);

  printf("min: %d, max: %d\n", minval, maxval);

  return 0;
}
