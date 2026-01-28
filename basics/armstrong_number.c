#include <stdio.h>

int main() {

    int num, original, digit;
    int sum = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    original = num;   // Store original value

    // Armstrong logic
    while (num != 0) {

        digit = num % 10;
        sum = sum + (digit * digit * digit);
        num = num / 10;
    }

    // Check Armstrong
    if (original == sum) {
        printf("Armstrong Number");
    } else {
        printf("Not an Armstrong Number");
    }

    return 0;
}
