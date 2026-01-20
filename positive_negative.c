#include <stdio.h>   // Header file

int main() {

    int num;   // Variable declaration

    // Input from user
    printf("Enter a number: ");
    scanf("%d", &num);

    // Condition check
    if (num >= 0) {
        printf("Positive Number");
    } else {
        printf("Negative Number");
    }

    return 0;   // End of program
}
