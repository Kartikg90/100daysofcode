// write a program to input time in seconds and convert it into hours, minutes and seconds.
#include <stdio.h>
int main()
{
    int seconds, hours, minutes, rem_sec; //rem_sec = remaining seconds
    printf("Enter time in seconds: ");
    scanf("%d", &seconds);

    hours = seconds / 3600; //1 hours = 3600 seconds
    minutes = (seconds % 3600) / 60; //1 minute = 60 seconds
    rem_sec = seconds % 60; //remaining seconds

    printf("%d seconds is %d hours, %d minutes, and %d seconds.\n", seconds, hours, minutes, rem_sec);
    return 0;
}