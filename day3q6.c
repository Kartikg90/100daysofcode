#include <stdio.h>

int main() {
    int a, b, temp;

    // Input two numbers
    printf("Enter first number (a): ");
    scanf("%d", &a);

    printf("Enter second number (b): ");
    scanf("%d", &b);

    // Display before swap
    printf("Before swap: a = %d, b = %d\n", a, b);

    // Swap using a third variable
    temp = a;
    a = b;
    b = temp;

    // Display after swap
    printf("After swap: a = %d, b = %d\n", a, b);

    return 0;
}