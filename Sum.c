//Q1: Write a program to input two numbers and display their sum.
#include <stdio.h>
int main() {
    int num1, num2;
    printf("Enter two numbers:");
    scanf("%d %d", &num1, &num2);
    int sum= num1 + num2;
    printf("sum of %d and %d is %d", num1, num2, sum);
    return 0;
}