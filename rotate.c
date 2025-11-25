/*Q70: Rotate an array to the right by k positions.
Sample Test Cases:
Input 1:
5
1 2 3 4 5
2
Output 1:
4 5 1 2 3
*/
#include <stdio.h>

int main() {
    int n, i, k;

    scanf("%d", &n);

    int arr[100], result[100];

    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    scanf("%d", &k);

    k = k % n; // handle values greater than n

    // place each element in its new position
    for (i = 0; i < n; i++) {
        result[(i + k) % n] = arr[i];
    }

    // print rotated array
    for (i = 0; i < n; i++) {
        printf("%d ", result[i]);
    }

    return 0;
}
