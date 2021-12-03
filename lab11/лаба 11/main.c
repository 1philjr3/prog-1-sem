#include <stdio.h>
#include "rectangle.h"

int main()
{
    printf("=== Task 1 === \n");

    struct Rectangle rect;

    printf("Add first coords:  ");
    scanf("%f %f", &rect.x1, &rect.y1);
    printf("Add second coords: ");
    scanf("%f %f", &rect.x2, &rect.y2);
    printf("Perimeter: %f\n", rectanglePerimeter(rect));
    printf("Area: %f\n", rectangleArea(rect));
    
    return 0;
}
