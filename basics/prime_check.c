#include <stdio.h>

int main() {

    int num, i, flag = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    // Prime logic
    for (i = 2; i < num; i++) {

        if (num % i == 0) {
            flag = 1;
            break;
        }
    }

    if (flag == 0 && num > 1) {
        printf("Prime Number");
    } else {
        printf("Not a Prime Number");
    }

    return 0;
}
