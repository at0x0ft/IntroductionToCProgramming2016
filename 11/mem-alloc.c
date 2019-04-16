#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  char *p = malloc(sizeof(char) * 10);

  /* 追加部分: メモリ確保に成功したかを調べる */
  if(p == NULL)
  {
    fprintf(stderr, "メモリ確保に失敗");
    return 1;
  }

  // printf("%s\n", p);

  /* write "Hello" to the allocated memory */
  p[0] = 'H'; p[1] = 'e'; p[2] = 'l'; p[3] = 'l'; p[4] = 'o';
  p[5] = '\0';

  printf("%s\n", p);

  sprintf(p, "Bye!");

  printf("%s\n", p);

  free(p);

  return 0;
}
