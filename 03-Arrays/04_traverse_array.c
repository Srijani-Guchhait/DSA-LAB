#include <stdio.h>

#define MAX_SIZE 100

int main(void)
{
    int numbers[MAX_SIZE];
    size_t count;

    printf("Enter number of elements: ");
    if (scanf("%zu", &count) != 1 || count == 0 || count > MAX_SIZE) {
        fprintf(stderr, "Invalid array size.\n");
        return 1;
    }

    printf("Enter %zu elements: ", count);
    for (size_t i = 0; i < count; ++i) {
        if (scanf("%d", &numbers[i]) != 1) {
            fprintf(stderr, "Invalid element.\n");
            return 1;
        }
    }

    printf("Array traversal: ");
    for (size_t i = 0; i < count; ++i)
        printf("%d%s", numbers[i], (i + 1 == count) ? "\n" : " ");

    return 0;
}
