//Write a program to calculate simple and compound interest for given principal, rate, and time.

#include <stdio.h>
#include <math.h>
int main() {
    float principal, rate, time, SI, CI ;   // SI= simple interest, CI= compound interest 

    printf("Enter Princpal amount: ");
    scanf("%f", &principal);
    printf("Enter rate of interest: ");
    scanf("%f", &rate);
    printf("Enter time (in years): ");
    scanf("%f", &time);

    //calculating SI and CI
    SI = (principal * rate * time) / 100;
    printf("SI = %.2f\n", SI );

    CI = principal * pow((1 + rate/100), time) - principal;
    printf("CI = %.2f\n", CI );

    return 0;

}