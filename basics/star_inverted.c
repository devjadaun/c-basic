#include <stdio.h>

int main() {

    int i, j, rows;

    printf("Enter number of rows: ");
    scanf("%d", &rows);

    // Outer loop
    for (i = rows; i >= 1; i--) {

        // Inner loop
        for (j = 1; j <= i; j++) {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}
