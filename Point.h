// A 3-dimensional point class!
// Coordinates are double-precision floating point.

#ifndef __POINT_H
#define __POINT_H

class Point {

private:
    double x, y, z;

public:
    // Constructors
    Point();                      // default constructor
    Point(double inX, double inY, double inZ);    // 3-argument constructor

    // Mutator methods
    void setX(double newX); //Sets the X coordinate of the point
    void setY(double newY); //Sets the Y coordinate of the point
    void setZ(double newZ); //Sets the Z coordinate of the point

    // Accessor methods
    double getX() const; //Gets the x coordinate of the point;
    double getY() const; //Gets the y coordinate of the point;
    double getZ() const; //Gets the z coordinate of the point;
    double distanceTo(const Point &point2) const;


};

#endif // __POINT_H
