//Q31: Write a program to take a number as input and print its equivalent binary representation without using an array.
#include <stdio.h>
int main() {
    int num, binary = 0, place = 1;
    printf("Enter a positive integer: ");
    scanf("%d", &num);
    while (num > 0) {
        int remainder = num % 2; 
        binary += remainder * place; 
        place *= 10; 
        num /= 2; 
    }
    printf("Binary Representation: %d\n", binary);
    return 0;
}