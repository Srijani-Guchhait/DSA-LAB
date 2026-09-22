#include <stdio.h>

static void insertion_sort(int a[], int n)
{
    for (int i = 1; i < n; ++i) {
        int key = a[i];
        int j = i - 1;
        while (j >= 0 && a[j] > key) {
            a[j + 1] = a[j];
            --j;
        }
        a[j + 1] = key;
    }
}

static int binary_search(const int a[], int n, int key)
{
    int low = 0, high = n - 1;

    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (a[mid] == key) return mid;
        if (key < a[mid]) high = mid - 1;
        else low = mid + 1;
    }
    return -1;
}

int main(void)
{
    int a[100], n, key;

    printf("Enter number of elements: ");
    if (scanf("%d", &n) != 1 || n <= 0 || n > 100) return 1;

    printf("Enter elements: ");
    for (int i = 0; i < n; ++i)
        if (scanf("%d", &a[i]) != 1) return 1;

    printf("Enter element to search: ");
    if (scanf("%d", &key) != 1) return 1;

    insertion_sort(a, n);

    printf("Sorted array: ");
    for (int i = 0; i < n; ++i)
        printf("%d%s", a[i], (i + 1 == n) ? "\n" : " ");

    int index = binary_search(a, n, key);
    printf(index >= 0 ? "Element %d found at index %d.\n" : "Element %d not found.\n", key, index);

    return 0;
}
