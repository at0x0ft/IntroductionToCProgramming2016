
#include <stdio.h>

int main(void)
{
  // Scores of math tests
  int math_scores[8] = { 84, 29, -1, 87, 95, 95, 30, 90 };
  int i;

  printf("Math Scores:\n--------\n");
  for(i = 0; i < 8; ++i)
  {
    printf("Student #%d: %3d\n", (i+1), math_scores[i]);
  }
  printf("--------\n");

  return 0;
}
