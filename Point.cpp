//
// Created by Peter Gibbs on 1/30/2016.
//

#include "Point.h"
#include <cmath>


Point::Point()//Default constructor
{
    x=0;
    y=0;
    z=0;
}

Point::Point(double inX,double inY,double inZ)
{
    x=inX;
    y=inY;
    z=inZ;
}

double Point::getX() const
{
    return x;
}

double Point::getY() const
{
    return y;
}


double Point::getZ() const
{
    return z;
}

void Point::setX(double newX)
{
    x=newX;
}

void Point::setY(double newY)
{
    y=newY;
}


void Point::setZ(double newZ)
{
    z=newZ;
}


double Point::distanceTo(const Point &point2) const
{
    double x2=point2.getX();
    double y2=point2.getY();
    double z2=point2.getZ();

    double xSquared=(x2-x)*(x2-x);
    double ySquared=(y2-y)*(y2-y);
    double zSquared=(z2-z)*(z2-z);
    return sqrt(xSquared+ySquared+zSquared);
}