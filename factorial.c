//Q29: Write a program to calculate the factorial of a number.
#include <stdio.h>
int main() {
    int n, i;
    unsigned long long factorial = 1; 
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    if (n < 0) {
        printf("Error: Factorial of a negative number doesn't exist.\n");
    } else {
        for (i = 1; i <= n; i++) {
            factorial *= i; 
        }
        printf("The factorial of %d is: %llu\n", n, factorial);
    }
    return 0;
}