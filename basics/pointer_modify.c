#include <stdio.h>

int main() {

    int x = 5;
    int *p = &x;

    printf("Before modification: %d\n", x);

    *p = 20;   // Modify value using pointer

    printf("After modification: %d\n", x);

    return 0;
}