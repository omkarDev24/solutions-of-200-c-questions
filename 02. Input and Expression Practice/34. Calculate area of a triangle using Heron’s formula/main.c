#include <stdio.h>
#include <math.h>
int main()
{
    float a, b, c, side;

    printf("Enter three sides of triangle: ");
    scanf("%f %f %f", &a, &b, &c);

    side = (a + b + c) / 2;

    printf("area of triangle = %.2f", sqrt(side * (side - a) * (side - b) * (side - c)));

    return 0;
}