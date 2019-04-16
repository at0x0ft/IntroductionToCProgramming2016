
#include <stdio.h>

int main(void)
{
  // Scores of math tests
  int math_scores[8] = { 84, 29, -1, 87, 95, 95, 30, 90 };
  int math_total = 0, n = 0;
  double math_average;
  int i;

  // Counts examinees and sums up thier scores
  for(i = 0; i < 8; ++i)
  {
    if(math_scores[i] != -1)
    {
       math_total += math_scores[i];
       n += 1;
    }
  }

  math_average = 1.0 * math_total / n;

  printf("Math Scores:\n--------\n");
  for(i = 0; i < 8; ++i)
  {
    if(math_scores[i] >= math_average)
    {
      printf("Student #%d: %3d*\n", (i+1), math_scores[i]);
    }
    else
    {
      printf("Student #%d: %3d\n",  (i+1), math_scores[i]);
    }
  }
  printf("--------\n");

  printf("Average: %.3f\n", math_average);

  return 0;
}
