/*Q51: Write a program to print the following pattern:
    5
   45
  345
 2345
12345
*/
#include <stdio.h>
int main()
{
    int i, j, k, n = 5;
    for (i = 1; i <= n; i++)
    {
        for (j = n; j > i; j--)
        {
            printf(" ");
        }
        for (k = n - i + 1; k <= n; k++)
        {
            printf("%d", k);
        }
        printf("\n");
    }
    return 0;
}
