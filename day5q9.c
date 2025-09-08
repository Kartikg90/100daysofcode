//Write a program to calculate simple and compound interest for given principal, rate, and time.

#include <stdio.h>
int main()
{
    float principal, rate, time, simple_interest, compound_interest;
    int amount;
    int i;

        // Input principal, rate, and time
    printf("Enter Principal Amount: ");
    scanf("%f", &principal);
    printf("Enter rate of interest(in percentage): ");
    scanf("%f", &rate);
    printf("Enter time (is years): ");
    scanf("%f", &time);

    // Calculate simple interest
    simple_interest = (principal * rate * time)/ 100;
    amount = principal;
    
    for(i=0; i < (int)time; i++)
    amount = amount + (amount * rate/100);
     // Calculate compound interest
    compound_interest = amount - principal;

        // Display the results
    printf("Simple Interest = %.2lf\n", simple_interest);
    printf("Compound Interest = %.2lf\n", compound_interest);
    return 0;
    

}
