#include <stdio.h>

int binary_search(const int a[], int low, int high, int key)
{
    if (low > high)
        return -1;

    int mid = low + (high - low) / 2;

    if (a[mid] == key)
        return mid;
    if (key < a[mid])
        return binary_search(a, low, mid - 1, key);
    return binary_search(a, mid + 1, high, key);
}

int main(void)
{
    int a[100], n, key;

    printf("Enter number of elements: ");
    if (scanf("%d", &n) != 1 || n <= 0 || n > 100)
        return 1;

    printf("Enter sorted elements: ");
    for (int i = 0; i < n; ++i)
        if (scanf("%d", &a[i]) != 1) return 1;

    printf("Enter element to search: ");
    if (scanf("%d", &key) != 1) return 1;

    int index = binary_search(a, 0, n - 1, key);
    if (index >= 0)
        printf("Element %d found at index %d.\n", key, index);
    else
        printf("Element %d not found.\n", key);

    return 0;
}
