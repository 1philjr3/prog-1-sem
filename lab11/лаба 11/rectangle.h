
#ifndef rectangle_h
#define rectangle_h

#include <math.h>

struct Rectangle{
    float x1, y1;
    float x2, y2;
};

float rectanglePerimeter(struct Rectangle rect);
float rectangleArea(struct Rectangle rect);

#endif
