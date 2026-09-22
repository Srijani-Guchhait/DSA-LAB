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

int main(void)
{
    int a[] = {64, 34, 25, 12, 22, 11, 90};
    int n = (int)(sizeof(a) / sizeof(a[0]));

    insertion_sort(a, n);
    printf("Sorted array: ");
    for (int i = 0; i < n; ++i) printf("%d%s", a[i], i + 1 == n ? "\n" : " ");
    return 0;
}
