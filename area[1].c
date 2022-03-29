#include <stdio.h>
int main()
{
    const int PI = 3.142;
    int Radius = 7;
    int Area;

    Area = PI*Radius*Radius;

    printf("Area of a circle: %d", Area);

    return 0;
}
