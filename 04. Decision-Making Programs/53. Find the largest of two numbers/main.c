#include<stdio.h>
int main()
{
    int num1,num2;

    printf("enter two number: ");
    scanf("%d %d",&num1,&num2);

    if(num1 > num2){
        printf("first number is largest");
    }
    else{
        printf("second number is largest");
    }

    return 0;
}