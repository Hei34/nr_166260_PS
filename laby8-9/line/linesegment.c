#include <stdio.h>
#include <math.h>
#include "point.h"
#include "linesegment.h"

LineSegment MakeLineSegment(int ax, int ay, int bx, int by)
{
    LineSegment temp;
    temp.ax = ax;
    temp.ay = ay;
    temp.bx = bx;
    temp.by = by;
    return temp;
}
LineSegment MakeLineSegmentPP(const Point *a, const Point *b)
{
    LineSegment temp;
    temp.a.x = a.x;
    temp.ay = a.y;

    return temp;
}
void showLine(const LineSegment *l)
{
    printf("<%d, %d> do <%d,%d>", l->ax, l->ay,l->bx,l->by);
}
double lineLength(const LineSegment *l)
{
    return (sqrt(pow( (l->ax)-(l->bx) ,2)+pow( (l->ay)-(l->by) ,2)));
}
