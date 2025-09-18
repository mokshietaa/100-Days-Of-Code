/*Q52: Write a program to print the following pattern:
*

*
*
*

*
*
*
*
*

*
*
*

*
*/
#include <stdio.h>
int main()
{
    int i, j, k, n = 4;
    for (i = n; i >= 1; i--)
    {
        for (j = 1; j <= n - i + 1; j++)
        {
            for (k = 1; k <= i; k++)
            {
                printf("*\n");
            }
            printf("\n");
        }
    }
    return 0;
}