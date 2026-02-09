#include <stdio.h>

int main() {

    char name[50];

    printf("Enter your name: ");
    scanf("%s", name);   // Takes single word input

    printf("Hello, %s", name);

    return 0;
}
