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

int main(void)
{
    int a[] = {2, 5, 8, 3, 6, 9};
    int n = (int)(sizeof(a) / sizeof(a[0]));

    printf("Two sorted halves: ");
    for (int i = 0; i < n; ++i) printf("%d%s", a[i], i + 1 == n ? "\n" : " ");

    merge(a, 0, 2, 5);

    printf("After merging the halves: ");
    for (int i = 0; i < n; ++i) printf("%d%s", a[i], i + 1 == n ? "\n" : " ");
    return 0;
}
