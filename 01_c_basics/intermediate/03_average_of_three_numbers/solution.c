#include <stdio.h>

int main()
{
    int a, b, c;
    float average;

    printf("Enter three numbers (space or line separated):\n");
    scanf("%d %d %d", &a, &b, &c);

    average = (float)(a + b + c) / 3;

    printf("Average = %.2f\n", average);

    return 0;
}