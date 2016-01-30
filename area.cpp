//
// Created by Peter on 1/30/2016.
//
#include <cmath>
#include "Point.h"

double computeArea(const Point &a, const Point &b, const Point &c)
{
    //To compute the area of a triangle we first have to creat one, We use the distanceTo() function to construct the 3 sides of the triange
    double sideA=a.distanceTo(b);
    double sideB=b.distanceTo(c);
    double sideC=c.distanceTo(a);
   double s=(sideA+sideB+sideC)/2;
    return sqrt(s*(s-sideA)*(s-sideB)*(s-sideC));
}