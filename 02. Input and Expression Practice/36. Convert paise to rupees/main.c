#include<stdio.h>
int main()
{
    float paise;

    printf("enter the value: ");
    scanf("%f",&paise);

    printf("rupees is %.2f",paise/100);

    return 0;
}