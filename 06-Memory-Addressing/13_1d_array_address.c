#include <stdio.h>

int main(void)
{
    unsigned long long base, width;
    long long index, lower_bound;

    printf("Enter base address (B): ");
    if (scanf("%llu", &base) != 1) return 1;

    printf("Enter index: ");
    if (scanf("%lld", &index) != 1) return 1;

    printf("Enter data type size in bytes (w): ");
    if (scanf("%llu", &width) != 1 || width == 0) return 1;

    printf("Enter lower bound (LB): ");
    if (scanf("%lld", &lower_bound) != 1 || index < lower_bound) return 1;

    unsigned long long address = base + (unsigned long long)(index - lower_bound) * width;
    printf("Address of A[%lld] = %llu\n", index, address);

    return 0;
}
