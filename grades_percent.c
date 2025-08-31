//Q18: Write a program to assign grades based on a percentage input.
#include <stdio.h>
int main() {
    float percent;
    printf("Enter the percentage: ");
    scanf("%f", &percent);
    if(percent >= 90) {
        printf("Grade: O\n");
    } else if(percent >= 80) {
        printf("Grade: A\n");
    } else if(percent >= 70) {
        printf("Grade: B\n");
    } else if(percent >= 60) {
        printf("Grade: C\n");
    } else if(percent >= 50) {
        printf("Grade: D\n");
    } else {
        printf("Grade: F\n");
    }
    return 0;
}