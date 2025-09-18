//Q43: Write a program to check if a number is a strong number.
#include <stdio.h>
int main()
{
    int n, r, sum = 0, fact, temp;
    printf("Enter a number: ");
    scanf("%d", &n);
    temp = n;
    while (n > 0)
    {
        r = n % 10;
        fact = 1;
        for (int i = 1; i <= r; i++)
        {
            fact = fact * i;
        }
        sum = sum + fact;
        n = n / 10;
    }
    if (sum == temp)
    {
        printf("%d is a strong number\n", temp);
    }
    else
    {
        printf("%d is not a strong number\n", temp);
    }
    return 0;
}