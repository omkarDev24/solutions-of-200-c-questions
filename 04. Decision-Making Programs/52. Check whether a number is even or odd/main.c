#include <stdio.h>
int main()
{
    int num;

    printf("enter a number: ");
    scanf("%d", &num);

    num = num % 2;

    if (num == 0){
        printf("number is even");
    }
    else{
        printf("number is odd");
    }
    
    return 0;
}