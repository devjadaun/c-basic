#include <stdio.h>

int main() {

    int choice, a, b;

    // Menu
    printf("1. Add\n");
    printf("2. Subtract\n");
    printf("3. Multiply\n");
    printf("4. Divide\n");

    printf("Enter your choice: ");
    scanf("%d", &choice);

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    // Operation selection
    if (choice == 1) {
        printf("Result = %d", a + b);
    }
    else if (choice == 2) {
        printf("Result = %d", a - b);
    }
    else if (choice == 3) {
        printf("Result = %d", a * b);
    }
    else if (choice == 4) {
        printf("Result = %d", a / b);
    }
    else {
        printf("Invalid Choice");
    }

    return 0;
}
