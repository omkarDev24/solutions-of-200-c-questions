#include<stdio.h>
int main()
{
    float b,h;

    printf("enter the base and height: ");
    scanf("%f %f",&b,&h);

    printf("the area of triangle is %2.f",(b*h)/2);
    
    return 0;
}