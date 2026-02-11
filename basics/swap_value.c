#include <stdio.h>

// Pass by value
void swap(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
}

int main() {

    int x = 10, y = 20;

    swap(x, y);

    printf("After swap (value): x=%d y=%d", x, y);

    return 0;
}
