#include <stdio.h>
#include <math.h>
#include "point.h"
#include "linesegment.h"

LineSegment MakeLineSegment(int ax, int ay, int bx, int by)
{
    LineSegment temp;
    temp.a.x = ax;
    temp.a.y = ay;
    temp.b.x = bx;
    temp.b.y = by;
    return temp;
}
LineSegment MakeLineSegmentPP(const Point *a, const Point *b)
{
    LineSegment temp;
    temp.a.x = a->x;
    temp.a.y = a->y;
    temp.b.x = b->x;
    temp.b.y = b->y;
    return temp;
}
void showLine(const LineSegment *l)
{
    printf("<%d, %d> do <%d,%d>", l->a.x, l->a.y,l->b.x,l->b.y);
}
double lineLength(const LineSegment *l)
{
    double x1=l->a.x;
    double x2=l->b.x;
    double y1=l->a.y;
    double y2=l->b.y;
    double dlugosc=0;
    dlugosc = sqrt( pow((x2-x1),2) + pow((y2-y1),2));
    return dlugosc;
}
int parallel(const LineSegment *s1,const LineSegment *s2)
{

}
