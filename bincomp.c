//Q40: Write a program to find the 1’s complement of a binary number and print it. without using long.
#include <stdio.h>
int main() {
    int binary, num = 0, place = 1, digit;
    printf("Enter a binary number: ");
    scanf("%d", &binary);
    while (binary != 0) {
        digit = binary % 10; 
        if (digit == 0) {
            digit = 1; 
        } else if (digit == 1) {
            digit = 0; 
        } else {
            printf("Invalid binary number.\n");
            return 1; 
        }
        num += digit * place; 
        place *= 10; 
        binary /= 10; 
    }
    printf("The 1's complement is: %d\n", num);
    return 0;

}