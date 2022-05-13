#ifndef LINESEGMENT_H
#define LINESEGMENT_H
#include "point.h"

typedef struct LineSegment{
    Point a;
    Point b;
}LineSegment;

LineSegment MakeLineSegment(int ax,int ay,int bx,int by);
LineSegment MakeLineSegmentPP(const Point *a,const Point *b);
void showLine(const LineSegment *l);
double lineLength(const LineSegment *l);
int parallel(const LineSegment *s1,const LineSegment *s2);
#endif
