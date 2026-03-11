#include <stdio.h>

int main()
{
    int a, b, temp;

    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);

    // Swap using temporary variable
    temp = a;
    a = b;
    b = temp;

    printf("a = %d, b = %d\n", a, b);

    return 0;
}