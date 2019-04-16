#include <stdio.h>

/* 2次元平面上の点 */
typedef struct
{
  double x, y;
} Point; // ← 最後にセミコロンが必要

/* 原点 (0,0) と、 p1, p2 が作る　3　角形の符号付き面積を求める。 */
/* ただし座標系は右手系とし、右回転を正とする。 */
double TriangleArea(Point p1, Point p2)
{
  return (p1.x * p2.y - p2.x * p1.y) / 2.0;
}

/* 3 点の重心を求める */
Point Centroid3(Point p1, Point p2, Point p3)
{
  Point C;

  C.x = ( p1.x + p2.x + p3.x ) / 3.0;
  C.y = ( p1.y + p2.y + p3.y ) / 3.0;

  return C;
}

int main(void)
{
  Point p1 = {  1.0, 0.0 };
  Point p2 = { -1.5, 0.4 };
  Point p3 = {  3.5, 0.8 };
  double S;
  Point C;

  S = TriangleArea(p1, p2);
  C = Centroid3(p1, p2, p3);

  printf("Area of triangle (0,0), (%f,%f), (%f,%f) is %f\n",
    p1.x, p1.y, p2.x, p2.y, S);
  printf("Centroid of (%f,%f), (%f,%f), (%f,%f) is (%f,%f)\n",
    p1.x, p1.y, p2.x, p2.y, p3.x, p3.y, C.x, C.y);

  return 0;
}
