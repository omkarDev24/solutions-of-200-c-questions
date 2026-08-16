#include <stdio.h>
int main()
{
    /*
    #include<stdio.h>
    int main(){
        int n1, n2;

    printf("enter the 2 numbers: ");
    scanf("%d %d",n1,n2);

    if(n1<n2){
        printf("first no. is largest")
    }
    else{
        printf("second no. is largest");
    }
    }
    */
    int n1, n2;

    printf("enter the 2 numbers: ");
    scanf("%d %d",&n1,&n2);

    if(n1>n2){
        printf("first no. is largest");
    }
    else{
        printf("second no. is largest");
    }
    
    return 0;
}