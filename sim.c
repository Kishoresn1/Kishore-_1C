#include <stdio.h>

int main() {
    int num1, num2;
    char operator;

    printf("Enter operator (+, -, *, /): ");
    scanf("%c", &operator);
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    switch (operator) {
        case '+':
            printf("Result: %d\n", num1 + num2);
            break;
        case '-':
            printf("Result: %d\n", num1 - num2);
            break;
        case '*':
            printf("Result: %d\n", num1 * num2);
            break;
        case '/':
            if (num2 != 0)
                printf("Result: %.2f\n", (float)num1 / num2);
            else
                printf("Error! Division by zero.\n");
            break;
        default:
            printf("Invalid operator!\n");
    }
    return 0;
}
