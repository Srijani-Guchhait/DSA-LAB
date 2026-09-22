#include <stdio.h>

static void swap(int *a, int *b)
{
    int temp = *a; *a = *b; *b = temp;
}

static int partition(int a[], int low, int high)
{
    int pivot = a[high];
    int i = low - 1;

    for (int j = low; j < high; ++j)
        if (a[j] <= pivot) swap(&a[++i], &a[j]);

    swap(&a[i + 1], &a[high]);
    return i + 1;
}

static void quick_sort(int a[], int low, int high)
{
    if (low < high) {
        int pivot_index = partition(a, low, high);
        quick_sort(a, low, pivot_index - 1);
        quick_sort(a, pivot_index + 1, high);
    }
}

int main(void)
{
    int a[] = {10, 7, 8, 9, 1, 5};
    int n = (int)(sizeof(a) / sizeof(a[0]));

    printf("Unsorted array: ");
    for (int i = 0; i < n; ++i) printf("%d%s", a[i], i + 1 == n ? "\n" : " ");

    quick_sort(a, 0, n - 1);

    printf("Sorted array: ");
    for (int i = 0; i < n; ++i) printf("%d%s", a[i], i + 1 == n ? "\n" : " ");
    return 0;
}
