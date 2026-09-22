#include <stdio.h>

static void modified_bubble_sort(int a[], int n)
{
    for (int pass = 0; pass < n - 1; ++pass) {
        int swapped = 0;
        for (int j = 0; j < n - pass - 1; ++j) {
            if (a[j] > a[j + 1]) {
                int temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
                swapped = 1;
            }
        }
        if (!swapped) break;
    }
}

int main(void)
{
    int a[] = {1, 2, 3, 4, 5, 10, 9, 8};
    int n = (int)(sizeof(a) / sizeof(a[0]));

    modified_bubble_sort(a, n);
    printf("Sorted array: ");
    for (int i = 0; i < n; ++i) printf("%d%s", a[i], i + 1 == n ? "\n" : " ");
    return 0;
}
