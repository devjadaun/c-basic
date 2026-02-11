#include <stdio.h>

// Pass by reference using pointers
void swap(int *a, int *b) {

    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {

    int x = 10, y = 20;

    swap(&x, &y);   // Sending addresses

    printf("After swap (reference): x=%d y=%d", x, y);

    return 0;
}
