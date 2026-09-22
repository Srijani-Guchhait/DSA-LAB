#include <stdio.h>

#define MAX_SIZE 100

int main(void)
{
    int a[MAX_SIZE];
    int n, pos, value;

    printf("Enter number of elements: ");
    if (scanf("%d", &n) != 1 || n < 0 || n >= MAX_SIZE)
        return 1;

    printf("Enter elements: ");
    for (int i = 0; i < n; ++i)
        if (scanf("%d", &a[i]) != 1) return 1;

    printf("Enter insertion position (1-%d): ", n + 1);
    if (scanf("%d", &pos) != 1 || pos < 1 || pos > n + 1)
        return 1;

    printf("Enter value to insert: ");
    if (scanf("%d", &value) != 1)
        return 1;

    for (int i = n; i >= pos; --i)
        a[i] = a[i - 1];
    a[pos - 1] = value;
    ++n;

    printf("Array after insertion: ");
    for (int i = 0; i < n; ++i)
        printf("%d%s", a[i], (i + 1 == n) ? "\n" : " ");

    return 0;
}
