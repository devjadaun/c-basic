#include <stdio.h>

int main() {

    int age;

    printf("Enter your age: ");
    scanf("%d", &age); // scanf is used to  get input from user
    // & gives address to store value

    printf("Your age is: %d", age);
    return 0;
}