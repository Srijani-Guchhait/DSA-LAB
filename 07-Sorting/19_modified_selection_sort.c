#include <stdio.h>

static void modified_selection_sort(int a[], int n)
{
    for (int i = 0, j = n - 1; i < j; ++i, --j) {
        int min_index = i;
        int max_index = i;

        for (int k = i + 1; k <= j; ++k) {
            if (a[k] < a[min_index]) min_index = k;
            if (a[k] > a[max_index]) max_index = k;
        }

        int temp = a[i];
        a[i] = a[min_index];
        a[min_index] = temp;

        if (max_index == i) max_index = min_index;

        temp = a[j];
        a[j] = a[max_index];
        a[max_index] = temp;
    }
}

int main(void)
{
    int a[] = {64, 34, 25, 12, 22, 11, 90, 5};
    int n = (int)(sizeof(a) / sizeof(a[0]));

    modified_selection_sort(a, n);
    printf("Sorted array: ");
    for (int i = 0; i < n; ++i) printf("%d%s", a[i], i + 1 == n ? "\n" : " ");
    return 0;
}
