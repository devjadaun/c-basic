#include <stdio.h>

// Function to check prime
int isPrime(int num) {

    int i;

    if (num <= 1)
        return 0;

    for (i = 2; i < num; i++) {
        if (num % i == 0)
            return 0;
    }

    return 1;
}

int main() {

    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (isPrime(num))
        printf("Prime Number");
    else
        printf("Not a Prime Number");

    return 0;
}
