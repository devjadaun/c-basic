#include <stdio.h>   // Header file

int main() {

    int marks;   // Variable to store marks

    // Taking input
    printf("Enter marks: ");
    scanf("%d", &marks);

    // Checking grade using else-if ladder
    if (marks >= 90) {
        printf("Grade: A");
    }
    else if (marks >= 75) {
        printf("Grade: B");
    }
    else if (marks >= 60) {
        printf("Grade: C");
    }
    else if (marks >= 40) {
        printf("Grade: D");
    }
    else {
        printf("FAIL");
    }

    return 0;   // Program ends
}
