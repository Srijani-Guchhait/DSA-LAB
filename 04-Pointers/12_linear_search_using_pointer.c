#include <stdio.h>

#define MAX_SIZE 100

int main(void)
{
    int a[MAX_SIZE], target;
    size_t n;
    int *p = a;
    int found = 0;

    printf("Enter array size: ");
    if (scanf("%zu", &n) != 1 || n == 0 || n > MAX_SIZE)
        return 1;

    printf("Enter %zu elements: ", n);
    for (size_t i = 0; i < n; ++i)
        if (scanf("%d", p + i) != 1) return 1;

    printf("Enter element to search: ");
    if (scanf("%d", &target) != 1) return 1;

    for (size_t i = 0; i < n; ++i) {
        if (*(p + i) == target) {
            printf("Element %d found at index %zu\n", target, i);
            found = 1;
        }
    }

    if (!found)
        printf("Element %d not found.\n", target);

    return 0;
}
