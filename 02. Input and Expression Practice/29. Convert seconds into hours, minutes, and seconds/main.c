#include <stdio.h>

int main()
{
    int totalSeconds, hours, minutes;

    printf("Enter total seconds: ");
    scanf("%d", &totalSeconds);

    hours = totalSeconds / 3600;
    minutes = totalSeconds / 60;

    printf("Hours = %d\n", hours);
    printf("Minutes = %d\n", minutes);

    return 0;
}