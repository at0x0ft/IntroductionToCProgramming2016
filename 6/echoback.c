/**　Echo back the input values.
 * If the value is -1, terminated.
 */

#include <stdio.h>

int main(void)
{
  double n;

  for( ; ; ) // 無限ループ
  {
    printf("Enter a value (-1 to terminate): ");
    scanf("%lf ", &n);
    if(n == -1) break;

    // Insert your code here

    printf("Input value is %f!\n", n);
  }

  printf("Bye!\n\n");

  return 0;
}
