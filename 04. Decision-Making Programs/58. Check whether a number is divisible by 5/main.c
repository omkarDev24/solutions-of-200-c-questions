#include <stdio.h>
int main()
{

    int num = 0;
    int a;

    printf("enter a number: ");
    scanf("%d", &num);

    a = num % 5;

    if (a == 0){
        printf("%d is divisible by 5 ",num);
    }
    else{
        printf("%d is not divisible by 5",num);
    }

    return 0;
}