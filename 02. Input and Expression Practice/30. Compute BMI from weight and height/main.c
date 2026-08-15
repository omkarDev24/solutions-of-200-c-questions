#include<stdio.h>
int main()
{
    float cm,kg;

    printf("enter your height and weight: ");
    scanf("%f %f",&cm,&kg);

    printf("BMI is %2.f",kg/(cm*cm)*10000);

    return 0;
}