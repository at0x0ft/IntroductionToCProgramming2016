#include <stdio.h>

double NormalizedAngle(double angle);

int main(void)
{
  double a, na;

  printf("Input an angle in degree: ");
  scanf("%lf", &a);

  na = NormalizedAngle(a); // (*)

  printf("%f -> %f\n", a, na);

  return 0;
}

/** 一般角 angle [deg] を [0,360) に正規化する */
double NormalizedAngle(double angle)
{
  while(angle >= 0)
  {
    angle -= 360;
  }

  while(angle < 0)
  {
    angle += 360;
  }

  return angle;
}
