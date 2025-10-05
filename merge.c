//Q63: Merge two arrays.
#include <stdio.h>
int main() {
    int arr1[100], arr2[100], merged[200];
    int n1, n2, i, j, k;
// Input for the first array
    printf("Enter number of elements in the first array: ");
    scanf("%d", &n1);
    printf("Enter %d elements for the first array:\n", n1);
    for(i = 0; i < n1; i++) {
        scanf("%d", &arr1[i]);
    }
// Input for the second array
    printf("Enter number of elements in the second array: ");
    scanf("%d", &n2);
    printf("Enter %d elements for the second array:\n", n2);
    for(i = 0; i < n2; i++) {
        scanf("%d", &arr2[i]);
    }
    // Merging the two arrays
    k = 0;
    for(i = 0; i < n1; i++) {
        merged[k++] = arr1[i];
    }
    for(j = 0; j < n2; j++) {
        merged[k++] = arr2[j];
    }
    printf("Merged array:\n");
    for(i = 0; i < k; i++) {
        printf("%d ", merged[i]);
    }
    printf("\n");
    return 0;
}