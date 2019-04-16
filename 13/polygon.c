#include <stdio.h>

/* 2次元平面上の点 */
typedef struct
{
  double x, y;
} Point; // ← 最後にセミコロンが必要

/* 原点 (0,0) と、 p1, p2 が作る 3 角形の符号付き面積を求める。 */
/* ただし座標系は右手系とし, 反時計回りを正とする。 */
double TriangleArea(Point p1, Point p2)
{
  return (p1.x * p2.y - p2.x * p1.y) / 2.0;
}

/* n 角形の面積を求める。 */
/* 各頂点は P[0], ..., P[n-1] とし、反時計回りに並んでいるとする。 */
double PolygonArea(const Point *P, int n) // "Point P[]" でも可
{
  double S = 0.0;
  int i;
  for(i = 0; i < n; ++i)
  {
    // Adds area of P[i], P[i+1]
    S += TriangleArea(P[i], P[(i+1)%n]);
  }

  return S;
}

int main(void)
{
  Point Points[] = 
  {
    {  1.0,  1.0 },
    { -2.4,  1.3 },
    { -5.0, -0.2 },
    { -1.5, -2.0 },
    {  2.0, -0.3 }
  };
  int nPoints = sizeof(Points)/sizeof(Point);
  double S;
  int i;

  for(i = 0; i < nPoints; ++i)
  {
    printf("p%d = (%f,%f)\n", i, Points[i].x, Points[i].y);
  }
  printf("\n");

  S = PolygonArea(Points, nPoints);

  printf("Area of polygon is %f\n", S);

  return 0;
}
