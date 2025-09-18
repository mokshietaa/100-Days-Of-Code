//Q59: Count even and odd numbers in an array.
#include <stdio.h>
int main()
{
    int arr[100], n, i, even_count = 0, odd_count = 0;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    printf("Enter %d integers:\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        if (arr[i] % 2 == 0)
            even_count++;
        else
            odd_count++;
    }

    printf("Number of even numbers: %d\n", even_count);
    printf("Number of odd numbers: %d\n", odd_count);

    return 0;
}