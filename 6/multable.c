#include <stdio.h>

int main(void)
{
  int i, j;
  int n;

  printf("Max value (1--9): ");
  scanf("%d", &n);

  if(n < 1 || n > 9)
  {
    fprintf(stederr, "ごめん無理\n");
    return 1;
  }

  //printf("* |  1  2  3  4  5  6  7  8  9\n");
  printf("* | ");
  for(i = 1; i <= n; ++i)
  {
    printf("%2d ", i);
  }
  printf("\n");

  //
    // Prints 1 line
    for(j = 1; j <= 9; ++j)
    {
      printf("%2d ", i*j); // dの後の空白は、各数値を区切るために入れている
    }
    printf("\n");
  }

  return 0;
}
