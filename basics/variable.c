#include <stdio.h>

int main() {

    int age = 18;  // int variable is used to print integer value
    float height = 5.8; // float variable is used to print value like 7.8
    char grade = 'A';   // int char is used to print single character

        // %d for int
        // %f for float
        //  %c for char
    printf("Age: %d\n", age); // here \n is used for new line
    printf("Height: %.1f\n", height); // here .1f means to print only one number after point
    printf("Grade: %c\n", grade);
    return 0;
}