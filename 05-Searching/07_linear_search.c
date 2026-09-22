#include <stdio.h>

int main(void)
{
    int a[100], n, key;
    int found = -1;

    printf("Enter number of elements: ");
    if (scanf("%d", &n) != 1 || n <= 0 || n > 100)
        return 1;

    printf("Enter elements: ");
    for (int i = 0; i < n; ++i)
        if (scanf("%d", &a[i]) != 1) return 1;

    printf("Enter element to search: ");
    if (scanf("%d", &key) != 1) return 1;

    for (int i = 0; i < n; ++i) {
        if (a[i] == key) {
            found = i;
            break;
        }
    }

    if (found >= 0)
        printf("Element %d found at index %d.\n", key, found);
    else
        printf("Element %d not found.\n", key);

    return 0;
}
