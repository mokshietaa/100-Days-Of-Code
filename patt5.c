/*Q50: Write a program to print the following pattern:
*****
 ****
  ***
   **
    *
*/
#include <stdio.h>
int main()
{
    int i, j, k, rows;
    printf("Enter number of rows: ");
    scanf("%d", &rows);
    for (i = 1; i <= rows; i++)
    {
        for (j = 1; j < i; j++)
        {
            printf(" ");
        }
        for (k = rows; k >= i; k--)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}