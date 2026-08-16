#include<stdio.h>
int main()
{
    // M = ((x₁+x₂)/2, (y₁+y₂)/2)
    float x1,y1,x2,y2,midpt_X,midpt_Y;

    printf("enter the values\n");

    printf("enter x1: ");
    scanf("%f",&x1);

    printf("enter y1: ");
    scanf("%f",&y1);

    printf("enter x2: ");
    scanf("%f",&x2);

    printf("enter y2: ");
    scanf("%f",&y2);

    midpt_X = (x1+x2)/2;
    midpt_Y = (y1+y2)/2;

    printf("the midpoint is (%.1f,%.1f)",midpt_X,midpt_Y);

    return 0;
}