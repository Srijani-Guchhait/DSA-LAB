#include <stdio.h>

static void bubble_sort(int a[], int n)
{
    for (int pass = 0; pass < n - 1; ++pass)
        for (int j = 0; j < n - pass - 1; ++j)
            if (a[j] > a[j + 1]) {
                int temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
}

int main(void)
{
    int a[] = {64, 34, 25, 12, 22, 11, 90};
    int n = (int)(sizeof(a) / sizeof(a[0]));

    bubble_sort(a, n);
    printf("Sorted array: ");
    for (int i = 0; i < n; ++i) printf("%d%s", a[i], i + 1 == n ? "\n" : " ");
    return 0;
}
