#include <stdio.h>

int main(void)
{
  double t, w, BMI;

  printf("height[m]: ");
  scanf("%lf", &t);

  if(t <= 0)
  {
    printf("身長は0より大きい値で入力してください。\n\n");
    return 1; /* プログラムをステータスコード1で終了させる */
  }

  printf("weight[kg]: ");
  scanf("%lf", &w);

  /*BMIの計算*/
  BMI = w / (t*t);

  printf("BMI = %f\n", BMI);

  /* BMIに応じて肥満度を表示 */
  if(BMI < 18.5)
  {
    printf("低体重\n");
  }
  else if(BMI < 25.0)
  {
    printf("普通体重\n");
  }
  else if(BMI < 30.0)
  {
    printf("肥満1度\n");
  }
  else if(BMI < 35.0)
  {
    printf("肥満2度\n");
  }
  else if(BMI < 40.0)
  {
    printf("肥満3度\n");
  }
  else
  {
    printf("肥満4度\n");
  }

  return 0;
}
