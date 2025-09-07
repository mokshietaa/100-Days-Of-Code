//Q25: Write a program to implement a basic calculator using switch-case for +, -, *, /, %.
#include <stdio.h>
int main() {
    float num, n;
    char op, ch;
    printf("Enter a number: ");
    scanf("%f", &num);
    do {
        printf("Enter the operator (+, -, *, /, %%) or 0 to exit: ");
        scanf(" %c", &op);
        if (op == '0') {
            printf("Exiting the calculator.\n");
            break;
        }
        printf("Enter another number: ");
        scanf("%f", &n);
        switch (op) {
            case '+':
                num = num + n;
                printf("Result = %f\n", num);
                break;
            case '-':
                num = num - n;
                printf("Result = %f\n", num);
                break;
            case '*':
                num = num * n;
                printf("Result = %f\n", num);
                break;
            case '/':
                if (n != 0) {
                    num = num / n;
                    printf("Result = %f\n", num);
                } else {
                    printf("Error: Division by zero is not allowed.\n");
                }
                break;
            case '%':
                if ((int)n != 0) {
                    num = (int)num % (int)n;
                    printf("Result = %d\n", (int)num);
                } else {
                    printf("Error: Division by zero is not allowed.\n");
                }
                break;
            default:
                printf("Error: Invalid operator.\n");
        }
        printf("Do you want to continue? (y/n): ");
        scanf(" %c", &ch);
    } while (ch != 'n' && ch != 'N');
    printf("Final Result = %f\n", num);
 return 0;
}


