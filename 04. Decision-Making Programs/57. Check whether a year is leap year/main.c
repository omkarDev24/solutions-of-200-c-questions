#include<stdio.h>
int main(){

    int TotalDaysInYear = 0;

    printf("enter the total days in year: ");
    scanf("%d",&TotalDaysInYear);

    if(TotalDaysInYear != 365){
        printf("it is leap year!");
    }
    else{
        printf("it is not a leap year");
    }

    return 0;
}