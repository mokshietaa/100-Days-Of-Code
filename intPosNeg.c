//Q12: Write a program to input an integer and check whether it is positive, negative or zero using nested if–else.
#include <stdio.h>
int main() { 
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);
    if(num > 0) {
        printf("The number %d is Positive.\n", num);
    }
    else if(num < 0) {
        printf("The number %d is negative.\n", num);
    }
    else {
        printf ("The number is zero.\n");
    }
    return 0;
    }
    
