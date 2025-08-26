//Q2: Write a program to input two numbers and display their sum, difference, product, and quotient.
#include <stdio.h>
int main() {
    int num1, num2;
    printf("Enter two numbers:\n");
    scanf("%d", &num1);
    scanf("%d", &num2);
    int sum = num1 + num2;
    int difference = num1 - num2;
    int product = num1 * num2;
    float quotient = num1/num2;     
    printf("Sum of %d and %d is %d\n", num1, num2, sum);
    printf("Difference of %d and %d is %d\n", num1, num2, difference);
    printf("Product of %d and %d is %d\n", num1, num2, product);
    printf("Quotient of %d and %d is %.2f\n", num1, num2, quotient);
    
    return 0;
}