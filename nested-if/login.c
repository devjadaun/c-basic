#include <stdio.h>

int main() {

    int password;   // Store password

    // Asking for password
    printf("Enter password: ");
    scanf("%d", &password);

    // Nested if check
    if (password == 1234) {
        printf("Password correct\n");

        printf("Access Granted");
    }
    else {
        printf("Wrong Password");
    }

    return 0;
}
