/*Q79: Perform diagonal traversal of a matrix.
Sample Test Cases:
Input 1:
3 3
1 2 3
4 5 6
7 8 9
Output 1:
1 2 4 7 5 3 6 8 9
*/
#include <stdio.h>

int main() {
    int r, c, i, j;

    scanf("%d %d", &r, &c);

    int a[100][100];

    // Read matrix
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    // Step 1: Start from first row
    for (j = 0; j < c; j++) {
        int x = 0, y = j;
        while (x < r && y >= 0) {
            printf("%d ", a[x][y]);
            x++;
            y--;
        }
    }

    // Step 2: Start from last column (excluding first row)
    for (i = 1; i < r; i++) {
        int x = i, y = c - 1;
        while (x < r && y >= 0) {
            printf("%d ", a[x][y]);
            x++;
            y--;
        }
    }

    return 0;
}
