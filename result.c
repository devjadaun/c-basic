#include <stdio.h>

int main() {

    int marks;

    // Taking marks input
    printf("Enter marks: ");
    scanf("%d", &marks);

    // Nested condition
    if (marks >= 40) {
        printf("PASS\n");

        if (marks >= 75) {
            printf("Distinction");
        }
        else {
            printf("No Distinction");
        }
    }
    else {
        printf("FAIL");
    }

    return 0;
}
