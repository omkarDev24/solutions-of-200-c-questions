#include<stdio.h>
int main()
{
    int number,sq,c;

    printf("enter the number: ");
    scanf("%d",&number);

    sq = number*number;
    c = number*number*number;

    printf("square is %d and cube is %d",sq,c);

    return 0;
}