//Q39: Write a program to find the product of odd digits of a number.
#include <stdio.h>
int main() {
    int n, pro = 1, digit;
    int odd = 0; 
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    while (n != 0) {
        digit = n % 10; 
        if (digit % 2 != 0) { 
            pro *= digit; 
            odd = 1; 
        }
        n = n/10; 
    }
    if (odd) {
        printf("The product of the odd digits is: %d\n", pro);
    } else {
        printf("There are no odd digits in the number.\n");
    }
    return 0;
}