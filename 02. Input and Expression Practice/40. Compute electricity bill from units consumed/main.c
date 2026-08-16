#include<stdio.h>
int main()
{
    // Bill = Units × Rate
    int units, rate,bill;

    printf("enter the units: ");
    scanf("%d",&units);

    printf("enter the rate: ");
    scanf("%d",&rate);

    bill = units * rate;

    printf("bill is %d",bill);

    return 0;
}