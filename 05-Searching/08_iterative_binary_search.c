#include <stdio.h>

int main(void)
{
    int a[100], n, key;
    int low, high, mid;

    printf("Enter number of elements: ");
    if (scanf("%d", &n) != 1 || n <= 0 || n > 100)
        return 1;

    printf("Enter sorted elements: ");
    for (int i = 0; i < n; ++i)
        if (scanf("%d", &a[i]) != 1) return 1;

    printf("Enter element to search: ");
    if (scanf("%d", &key) != 1) return 1;

    low = 0;
    high = n - 1;

    while (low <= high) {
        mid = low + (high - low) / 2;

        if (a[mid] == key) {
            printf("Element %d found at index %d.\n", key, mid);
            return 0;
        }
        if (key < a[mid])
            high = mid - 1;
        else
            low = mid + 1;
    }

    printf("Element %d not found.\n", key);
    return 0;
}
