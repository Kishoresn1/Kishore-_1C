#include <stdio.h>
#include <ctype.h>
#include <string.h>

int checkPasswordLength(const char *password) {
    return strlen(password) >= 8; // Password should be at least 8 characters long
}

int containsUppercase(const char *password) {
    while (*password) {
        if (isupper(*password)) {
            return 1; // Found an uppercase letter
        }
        password++;
    }
    return 0; // No uppercase letter found
}

int containsLowercase(const char *password) {
    while (*password) {
        if (islower(*password)) {
            return 1; // Found a lowercase letter
        }
        password++;
    }
    return 0; // No lowercase letter found
}

int containsDigit(const char *password) {
    while (*password) {
        if (isdigit(*password)) {
            return 1; // Found a digit
        }
        password++;
    }
    return 0; // No digit found
}

int containsSpecialChar(const char *password) {
    while (*password) {
        if (ispunct(*password)) {
            return 1; // Found a special character
        }
        password++;
    }
    return 0; // No special character found
}

int isValidPassword(const char *password) {
    return checkPasswordLength(password) &&
           containsUppercase(password) &&
           containsLowercase(password) &&
           containsDigit(password) &&
           containsSpecialChar(password);
}

int main() {
    char password[100];

    // Get password input from the user
    printf("Enter your password: ");
    scanf("%s", password); // Input password

    // Check if the password is valid
    if (isValidPassword(password)) {
        printf("Password is valid.\n");
    } else {
        printf("Password is invalid. It must meet the following criteria:\n");
        printf("- At least 8 characters long\n");
        printf("- Contains at least one uppercase letter\n");
        printf("- Contains at least one lowercase letter\n");
        printf("- Contains at least one digit\n");
        printf("- Contains at least one special character\n");
    }

    return 0;
}
