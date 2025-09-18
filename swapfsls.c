//Q41: Write a program to swap the first and last digit of a number.
#include <stdio.h>
#include <math.h>
int main() {
    int num, first, last, digits, swap, temp;
    printf("Enter a number: ");
    scanf("%d", &num);
    last = num % 10; 
    digits = (int)log10(num); 
    first = (int)(num / pow(10, digits)); 
    if (first == last) {
        printf("Number after swapping first and last digit: %d\n", num);
        return 0;
    }
    swap = num - (first * pow(10, digits)) - last; 
    swap += last * pow(10, digits); 
    swap += first; 
    printf("Number after swapping first and last digit: %d\n", swap);
    return 0;
}