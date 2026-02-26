#include <stdio.h>

int main() {

    int x = 10;
    int *p;

    p = &x;   // Store address of x

    printf("Value of x = %d\n", x);
    printf("Address of x = %p\n", &x);
    printf("Pointer p stores address = %p\n", p);
    printf("Value at address stored in p = %d\n", *p);

    return 0;
}