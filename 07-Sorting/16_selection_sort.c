#include <stdio.h>

static void selection_sort(int a[], int n)
{
    for (int i = 0; i < n - 1; ++i) {
        int min_index = i;
        for (int j = i + 1; j < n; ++j)
            if (a[j] < a[min_index]) min_index = j;

        int temp = a[i];
        a[i] = a[min_index];
        a[min_index] = temp;
    }
}

int main(void)
{
    int a[] = {64, 34, 25, 12, 22, 11, 90};
    int n = (int)(sizeof(a) / sizeof(a[0]));

    selection_sort(a, n);
    printf("Sorted array: ");
    for (int i = 0; i < n; ++i) printf("%d%s", a[i], i + 1 == n ? "\n" : " ");
    return 0;
}
