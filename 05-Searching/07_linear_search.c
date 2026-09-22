#include <stdio.h>

int linearSearch(int arr[], int n, int target) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == target) {
            return i;
        }
    }
    return -1;
}

int main() {
    int arr[100], n, target, result;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter element to search: ");
    scanf("%d", &target);
    result = linearSearch(arr, n, target);
    if (result != -1) {
        printf("Element found at position: %d\n", result + 1);
    } else {
        printf("Element not found.\n");
    }
    return 0;
}

