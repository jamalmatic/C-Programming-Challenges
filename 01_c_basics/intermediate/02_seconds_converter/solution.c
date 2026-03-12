#include <stdio.h>

int main()
{
    int total_seconds;
    int hours, minutes, seconds;

    printf("Total seconds = ");
    scanf("%d", &total_seconds);

    hours = total_seconds / 3600;
    minutes = (total_seconds % 3600) / 60;
    seconds = total_seconds % 60;

    printf("%d hour(s) %d minute(s) %d second(s)\n", hours, minutes, seconds);

    return 0;
}