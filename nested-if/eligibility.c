#include <stdio.h>   // Header file

int main() {

    int age;   // Store age

    // Taking input
    printf("Enter your age: ");
    scanf("%d", &age);

    // Nested if condition
    if (age >= 18) {
        if (age <= 60) {
            printf("You are eligible to work.");
        }
        else {
            printf("You are above working age.");
        }
    }
    else {
        printf("You are not eligible to work.");
    }

    return 0;   // Program end
}
