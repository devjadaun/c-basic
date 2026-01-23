#include <stdio.h>   // Header file

int main() {

    int a, b, c;   // Variables declaration

    // Taking three numbers
    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    // Checking largest number
    if (a > b && a > c) {
        printf("Largest number is %d", a);
    }
    else if (b > a && b > c) {
        printf("Largest number is %d", b);
    }
    else {
        printf("Largest number is %d", c);
    }

    return 0;   // End of program
}
