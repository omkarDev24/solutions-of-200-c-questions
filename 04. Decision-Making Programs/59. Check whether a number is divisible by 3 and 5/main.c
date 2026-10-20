#include<stdio.h>
int main(){

    int num1 = 0;

    printf("enter a number: ");
    scanf("%d",&num1);

    int a = num1 % 5;
    int b = num1 % 3;

    if(a == 0 && b == 0){
        printf("%d is divisible by 3 and 5",num1);
    }
    else if(a == 0){
        printf("%d is only divisible by 5",num1);
    }
    else{
        printf("%d is only divisible by 3",num1);
    }
    
    return 0;
}