//Q55: Write a program to print all the prime numbers from 1 to n.
#include <stdio.h>
int main()
{
    int n, i, j, temp;
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    printf("Prime numbers between 1 and %d are: ", n);
    for (i = 2; i <= n; i++)
    {
        temp = 0;
        for (j = 2; j <= i / 2; j++)
        {
            if (i % j == 0)
            {
                temp = 1;
                break;
            }
        }
        if (temp == 0)
            printf("%d ", i);
    }
    return 0;
}