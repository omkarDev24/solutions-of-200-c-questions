#include <stdio.h>
int main(){
    
    int num1,num2;

    printf("enter two number: ");
    scanf("%d %d",&num1,&num2);

    if(num1 < num2){
        printf("%d is smallest",num1);
    }
    else{
        printf("%d is smallest",num2);
    }

    return 0;
}