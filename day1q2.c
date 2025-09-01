//Write a program to input two numbers and display their sum, difference, product, and quotient.


#include <stdio.h>
int main() {
    int num1, num2;
    int sum, diff, product;
    float quotient;

    printf("Enter first number:");
    scanf("%d", &num1);
    printf("Enter second number:");
    scanf("%d", &num2);

    sum = num1 + num2;
    diff = num1 - num2;
    product = num1 * num2;

    if (num2 != 0) {
        quotient = (float)num1 / num2;
        printf("\nquotient: %.2f", quotient);
    } else {
        printf("\ndivision by zero is not allowed.");
    }

    printf("\nsum: %d", sum);
    printf("\ndifference: %d", diff);
    printf("\nproduct: %d", product);

    return 0;
}