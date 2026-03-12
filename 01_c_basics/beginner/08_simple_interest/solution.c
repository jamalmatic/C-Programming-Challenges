#include <stdio.h>

int main()
{
    float principal, rate, time, interest;

    printf("Enter Principal, Rate, and Time (either space-separated or one per line):\n");
    scanf("%f %f %f", &principal, &rate, &time);

    // Calculate simple interest
    interest = (principal * rate * time) / 100;

    // Print the interest
    printf("Interest = %.0f\n", interest);

    return 0;
}