//Q67: Insert an element in an array at a given position.
#include <stdio.h>

int main() {
    int n, i, pos, value;
    scanf("%d", &n);

    int arr[100];

    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    scanf("%d %d", &pos, &value);

    pos = pos - 1;   // convert to 0-based index

    for (i = n; i > pos; i--) {
        arr[i] = arr[i - 1];
    }

    arr[pos] = value;

    for (i = 0; i <= n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
