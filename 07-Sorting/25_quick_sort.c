#include <stdio.h>

static void swap(int *a, int *b)
{
    int temp = *a; *a = *b; *b = temp;
}

static int partition(int a[], int low, int high)
{
    int pivot = a[low];
    int i = low + 1;
    int j = high;

    while (1) {
        while (i <= high && a[i] <= pivot) ++i;
        while (j >= low + 1 && a[j] > pivot) --j;
        if (i > j) break;
        swap(&a[i], &a[j]);
    }

    swap(&a[low], &a[j]);
    return j;
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
    int a[] = {29, 10, 14, 37, 13, 5, 42};
    int n = (int)(sizeof(a) / sizeof(a[0]));

    printf("Unsorted array: ");
    for (int i = 0; i < n; ++i) printf("%d%s", a[i], i + 1 == n ? "\n" : " ");

    quick_sort(a, 0, n - 1);

    printf("Sorted array: ");
    for (int i = 0; i < n; ++i) printf("%d%s", a[i], i + 1 == n ? "\n" : " ");
    return 0;
}
