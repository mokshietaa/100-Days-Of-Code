//Q32: Write a program to check if a number is a palindrome.
#include <stdio.h>
int main() {
    int num, reversed = 0, original, remainder;
    printf("Enter an integer: ");
    scanf("%d", &num);
    original = num; 
    while (num != 0) {
        remainder = num % 10; 
        reversed = reversed * 10 + remainder; 
        num /= 10; 
    }
    if (original == reversed) {
        printf("The number %d is a palindrome.\n", original);
    } else {
        printf("The number %d is not a palindrome.\n", original);
    }
    return 0; 
}