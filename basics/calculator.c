#include <stdio.h>
int main() {
    int a, b;
    int choice;
    printf("Enter the numbers: ");
    scanf("%d %d", &a, &b);
    printf("Enter the choice: ");
    scanf("%d", &choice);
    switch (choice) {
    case 1:
        printf("sum is %d", a+b);
        break;
    case 2:
        printf("sub is %d", a-b);
        break;
    case 3:
        printf("multiple of given number is %d", a*b);
        break;
    case 4:
        printf("Division of given number is %d", a/b);
        break;
        default:
        printf("enter 1-4 only");
    }
}