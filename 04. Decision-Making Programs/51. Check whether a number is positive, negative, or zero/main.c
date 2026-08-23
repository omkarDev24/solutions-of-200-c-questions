#include<stdio.h>
int main()
{
    int num;
    
    printf("enter a number: ");
    scanf("%d",&num);
    
    if(num > 0){
        printf("number is positive");
    }
    else if(num == 0){
        printf("number is zero");
    }
    else if(num < 0){
        printf("number is negative");
    }
    else{
        printf("number is invaild");
    }
    
    return 0;
}