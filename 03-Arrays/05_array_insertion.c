#include <stdio.h>
int insert (int arr[], int n, int element, int pos) {
    for (int i = n; i >= pos; i--) {
        arr[i] = arr[i - 1];
    }
    arr[pos - 1] = element;
    n++;
    return n;
}
int main () {
    int arr[100], n, element, pos;
    printf("Enter no. of elements: ");
    scanf("%d", &n);
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter elements to insert: ");
    scanf("%d", &element);
    printf("Enter position (1 to %d): ", n + 1);
    scanf("%d", &pos);
    n = insert(arr, n, element, pos);
    printf("Array after insertion: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}
