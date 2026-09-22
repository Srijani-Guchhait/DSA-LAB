#include <stdio.h>

static void merge(int a[], int left, int mid, int right)
{
    int temp[100];
    int i = left, j = mid + 1, k = left;

    while (i <= mid && j <= right)
        temp[k++] = (a[i] <= a[j]) ? a[i++] : a[j++];
    while (i <= mid) temp[k++] = a[i++];
    while (j <= right) temp[k++] = a[j++];

    for (i = left; i <= right; ++i) a[i] = temp[i];
}

static void merge_sort(int a[], int left, int right)
{
    if (left >= right) return;
    int mid = left + (right - left) / 2;
    merge_sort(a, left, mid);
    merge_sort(a, mid + 1, right);
    merge(a, left, mid, right);
}

int main(void)
{
    int a[] = {38, 27, 43, 3, 9, 82, 10};
    int n = (int)(sizeof(a) / sizeof(a[0]));

    printf("Original array: ");
    for (int i = 0; i < n; ++i) printf("%d%s", a[i], i + 1 == n ? "\n" : " ");

    merge_sort(a, 0, n - 1);

    printf("Sorted array: ");
    for (int i = 0; i < n; ++i) printf("%d%s", a[i], i + 1 == n ? "\n" : " ");
    return 0;
}
