#include <stdio.h>

#define MAX_SIZE 100

int main(void)
{
    int a[MAX_SIZE];
    int n, pos;

    printf("Enter number of elements: ");
    if (scanf("%d", &n) != 1 || n <= 0 || n > MAX_SIZE)
        return 1;

    printf("Enter elements: ");
    for (int i = 0; i < n; ++i)
        if (scanf("%d", &a[i]) != 1) return 1;

    printf("Enter deletion position (1-%d): ", n);
    if (scanf("%d", &pos) != 1 || pos < 1 || pos > n)
        return 1;

    for (int i = pos - 1; i < n - 1; ++i)
        a[i] = a[i + 1];
    --n;

    printf("Array after deletion: ");
    for (int i = 0; i < n; ++i)
        printf("%d%s", a[i], (i + 1 == n) ? "\n" : " ");

    return 0;
}
