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
    temp.ax = a->x;
    temp.ay = a->y;
    temp.bx = b->x;
    temp.by = b->y;
    return temp;
}
void showLine(const LineSegment *l)
{
    printf("<%d, %d> do <%d,%d>", l->a.x, l->a.y,l->b.x,l->b.y);
}
double lineLength(const LineSegment *l)
{
    return (sqrt(pow( (l->a.x)-(l->b.x) ,2)+pow( (l->a.y)-(l->b.y) ,2)));
}
