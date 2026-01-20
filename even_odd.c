#include <stdio.h>   // Header file for input and output functions

int main() {

    int num;   // Variable to store number

    // Taking input from user
    printf("Enter a number: ");
    scanf("%d", &num);

    // Checking even or odd
    if (num % 2 == 0) {
        printf("Even Number");
    } else {
        printf("Odd Number");
    }

    return 0;   // Program ends successfully
}
