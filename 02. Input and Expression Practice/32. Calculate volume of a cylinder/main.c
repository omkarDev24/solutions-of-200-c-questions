#include<stdio.h>
int main()
{
    float h,r,pi = 3.14;

    printf("enter the value: ");
    scanf("%f %f",&h,&r);

    printf("the volume of cylinder is %.2f",pi*(r*r)*h);

}