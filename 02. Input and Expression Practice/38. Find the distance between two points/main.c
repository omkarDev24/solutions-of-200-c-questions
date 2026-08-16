#include<stdio.h>
#include<math.h>
int main()
{
    // d = √[(x₂−x₁)² + (y₂−y₁)²]
    float x1 ,y1,x2,y2,distance;

    printf("enter the values\n");

    printf("enter x1: ");
    scanf("%f",&x1);

    printf("enter y1: ");
    scanf("%f",&y1);

    printf("enter x2: ");
    scanf("%f",&x2);

    printf("enter y2: ");
    scanf("%f",&y2);
    
    distance = sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));

    printf("the distance is %.2f",distance);

    return 0;
}