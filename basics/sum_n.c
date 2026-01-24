#include <stdio.h>

int main() {
    int n, i, sum = 0;
    printf("Enter value of n: ");
    scanf("%d", &n);

    // loop to calculate sum
    for(i = 1; i <= n; i++) {
        sum = sum + i;
    }

    printf("Sum = %d", sum);

    return 0;
}