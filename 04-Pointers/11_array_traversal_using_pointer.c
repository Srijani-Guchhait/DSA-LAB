#include <stdio.h>

int main(void)
{
    int a[] = {10, 20, 30, 40, 50};
    size_t n = sizeof(a) / sizeof(a[0]);
    int *p = a;

    printf("Array using pointer traversal: ");
    for (size_t i = 0; i < n; ++i)
        printf("%d%s", *(p + i), (i + 1 == n) ? "\n" : " ");

    return 0;
}
