#include <stdio.h>

int main() {
    int a, b;

    // Input two numbers
    printf("Enter first number (a): ");
    scanf("%d", &a);

    printf("Enter second number (b): ");
    scanf("%d", &b);

    // Display values before swap
    printf("Before swap: a = %d, b = %d\n", a, b);

    // Swap without using a third variable
    a = a + b;
    b = a - b;
    a = a - b;

    // Display values after swap
    printf("After swap: a = %d, b = %d\n", a, b);

    return 0;
}