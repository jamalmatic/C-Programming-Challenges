#include <stdio.h>

int main()
{
    float num1, num2;

    float addition, subtraction, multiplication, division;

    printf("Enter two number: \n");
    scanf("%f %f", &num1, &num2);

    addition = num1 + num2;
    subtraction = num1 - num2;
    multiplication = num1 * num2;
    division = num1 / num2;

    printf("Addition = %.2f\n", addition);
    printf("Subtraction = %.2f\n", subtraction);
    printf("Multiplication = %.2f\n", multiplication);
    printf("Division = %.2f\n", division);

    return 0;
}