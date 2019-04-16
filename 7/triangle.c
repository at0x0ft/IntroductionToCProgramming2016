#include <stdio.h>
int main(void)
{
  int i;
  int tri[10];

  // Computes triangular numbers.
  for(i = 0; i < 10; ++i)
  {
    tri[i] = i*(i + 1)/2;
  }

  // Shows triangular numbers and its difference sequence
  for(i = 0; i < 10; ++i)
  {
    printf("T%d = %d\n", i, tri[i]);
    if(i != 9) // i=9の時だけ、if文で最後の処理を弾く
    {
      printf("       %d\n", tri[i+1] - tri[i]);
    }
  }


  return 0;
}
