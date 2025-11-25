/*Q77: Check if the elements on the diagonal of a matrix are distinct.
Sample Test Cases:
Input 1:
3 3
1 2 3
4 5 6
7 8 1
Output 1:
False
Input 2:
3 3
1 2 3
4 5 6
7 8 9
Output 2:
True
*/
#include <stdio.h>

int main() {
    int r, c, i, j;

    scanf("%d %d", &r, &c);

    int a[100][100];

    // If not square, diagonal distinct check makes no sense
    if (r != c) {
        printf("False");
        return 0;
    }

    // Read matrix
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    // Check if diagonal elements are distinct
    for (i = 0; i < r; i++) {
        for (j = i + 1; j < r; j++) {
            if (a[i][i] == a[j][j]) {
                printf("False");
                return 0;
            }
        }
    }

    printf("True");
    return 0;
}
