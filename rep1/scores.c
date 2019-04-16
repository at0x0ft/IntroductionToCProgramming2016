
#include <stdio.h>

int main(void)
{
  // Variable declaration
  int math_scores[8] = { 84, 29, -1, 87, 95, 95, 30, 90 }; // Scores of math tests & absent number (-1)
  int math_sum; // The sum of math tests' scores
  double number = 0.0; // Valid number of people who took the tests
  double math_average; // The average of math tests
  int i; // The loop-control variable for calculating the average
  int j; // The loop-control variable for displaying the scores


  // Calculating the average
  for(i = 0; i < 8; ++i)
  {

    if(math_scores[i] >= 0) // Adding valid scores to the sum & counting valid number of people who took the tests
    {
      math_sum += math_scores[i], ++number;
    }

  }

  math_average = math_sum / number; // Calculating the average


  // Displaying the scores & average
  printf("Math Scores:\n--------\n");  // Displaying the title & the borderline

  for(j = 0; j < 8; ++j)
  {

    if(math_scores[j] >= math_average) // Displaying the score above the average (with the asterisk)
    {
      printf("Student #%d: %3d*\n", (j+1), math_scores[j]);
    }

    else //  Displaying the absence or the score below the average (without the asterisk)
    {
      printf("Student #%d: %3d\n", (j+1), math_scores[j]);
    }

  }

  printf("--------\n"); // Displaying the borderline
  printf("Average: %.1f\n", math_average); // Displaying the average


  return 0;
}
