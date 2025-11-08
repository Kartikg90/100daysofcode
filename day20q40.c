//Write a program to find the 1’s complement of a binary number and print it.

#include <stdio.h>
#include <string.h>

int main() {
    char binary[100], onesComplement[100];
    int i, length;

    printf("Enter a binary number: ");
    scanf("%s", binary);

    length = strlen(binary);

    // Compute 1's complement by flipping bits
    for (i = 0; i < length; i++) {
        if (binary[i] == '0') {
            onesComplement[i] = '1';
        } else if (binary[i] == '1') {
            onesComplement[i] = '0';
        } else {
            printf("Invalid input! Only binary digits are allowed.\n");
            return 1;
        }
    }
    onesComplement[length] = '\0'; // Null-terminate the string

    printf("1's Complement: %s\n", onesComplement);

    return 0;
}
