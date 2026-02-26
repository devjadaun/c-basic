#include <stdio.h>

int main() {

    int arr[5] = {1, 2, 3, 4, 5};
    int *p = arr;   // Array name is base address

    int i;

    printf("Array elements using pointer:\n");

    for (i = 0; i < 5; i++) {
        printf("%d ", *(p + i));
    }

    return 0;
}