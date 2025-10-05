//Q64: Find the digit that occurs the most times in an integer number.
#include <stdio.h>
int main() {
    int number, digit, count[10] = {0}, i, maxCount = 0, mostFreqDigit;
    printf("Enter an integer number: ");
    scanf("%d", &number);
    // Counting occurrences of each digit
    while(number != 0) {
        digit = number % 10;
        count[digit]++;
        number /= 10;
    }
    // Finding the digit with the maximum occurrences
    for(i = 0; i < 10; i++) {
        if(count[i] > maxCount) {
            maxCount = count[i];
            mostFreqDigit = i;
        }
    }
    printf("The digit that occurs the most is %d with %d occurrences.\n", mostFreqDigit, maxCount);
    return 0;
}
