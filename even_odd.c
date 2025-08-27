//Q11: Write a program to input an integer and check whether it is even or odd using if–else.
#include <stdio.h>
int main() { 
    int num;
    printf("Enter an intger: ");
    scanf("%d", &num);
    if(num%2==0)
    {
        printf("%d is an Even number!", num);
    }
    else
    {
        printf("%d is an Odd number!", num);
    }
    return 0;
}