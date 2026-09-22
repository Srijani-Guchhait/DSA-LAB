#include <stdio.h>

int main(void)
{
    unsigned long long base, width;
    size_t columns;
    long row, column, lower_row, lower_column;

    printf("Enter base address (B): ");
    if (scanf("%llx", &base) != 1) return 1;

    printf("Enter data type size in bytes (w): ");
    if (scanf("%llu", &width) != 1 || width == 0) return 1;

    printf("Enter row and column: ");
    if (scanf("%ld %ld", &row, &column) != 2) return 1;

    printf("Enter lower row and lower column bounds: ");
    if (scanf("%ld %ld", &lower_row, &lower_column) != 2) return 1;

    printf("Enter total number of columns (N): ");
    if (scanf("%zu", &columns) != 1 || columns == 0) return 1;

    if (row < lower_row || column < lower_column) {
        fprintf(stderr, "Row/column is below the lower bound.\n");
        return 1;
    }

    unsigned long long offset =
        ((unsigned long long)(row - lower_row) * columns +
         (unsigned long long)(column - lower_column)) * width;

    printf("Row-major address of A[%ld][%ld] = 0x%llx\n", row, column, base + offset);
    return 0;
}
