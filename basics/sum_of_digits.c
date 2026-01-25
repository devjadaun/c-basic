#include <stdio.h>

int main() {

    int num, sum = 0, digit;

    printf("Enter a number: ");
    scanf("%d", &num);

    // Sum of digits logic
    while (num != 0) {

        digit = num % 10;
        sum = sum + digit;
        num = num / 10;
    }

    printf("Sum of digits = %d", sum);

    return 0;
}
