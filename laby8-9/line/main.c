#include <stdio.h>
#include <stdlib.h>
#include "linesegment.h"
#include "point.h"


int main()
{
    Point a = makePoint(5,5);
    showPoint(&a);

    LineSegment linia1= MakeLineSegment(5,5,6,9);
    printf("\n");
    showLine(&linia1);
    printf(" i jej dlugosc to :");
    lineLength(&linia1);

    Point b=makePoint(4,6);
    LineSegment linia2= MakeLineSegmentPP(&a,&b);
    printf("\n");
    showLine(&linia2);
    return 0;
}
