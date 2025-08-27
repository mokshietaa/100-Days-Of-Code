//Q10: Write a program to input time in seconds and convert it to hours:minutes:seconds format.
#include <stdio.h>
int main() {
    int seconds, minutes, hours;
    printf("Enter time in seconds:");
    scanf("%d", &seconds);
    minutes= seconds / 60;
    hours= minutes / 60;
    printf("Time in minutes: %d\n", minutes);
    printf("Time in hours: %d\n", hours);
    return 0;
}