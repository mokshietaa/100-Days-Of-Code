/*Q69: Find the second largest element in an array.
Sample Test Cases:
Input 1:
5
10 20 30 40 50
Output 1:
40
*/
#include <stdio.h>

int main() {
    int n, i;

    scanf("%d", &n);

    int arr[100];

    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int largest = arr[0];
    int second = -999999;  // something very small

    // find largest
    for (i = 1; i < n; i++) {
        if (arr[i] > largest) {
            largest = arr[i];
        }
    }

    // find second largest
    for (i = 0; i < n; i++) {
        if (arr[i] < largest && arr[i] > second) {
            second = arr[i];
        }
    }

    printf("%d", second);

    return 0;
}
