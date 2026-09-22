#include <stdio.h>

long long factorial(int n)
{
    if (n <= 1)
        return 1;
    return n * factorial(n - 1);
}

int main(void)
{
    int number;

    printf("Enter a non-negative integer: ");
    if (scanf("%d", &number) != 1 || number < 0 || number > 20) {
        fprintf(stderr, "Invalid input. Enter a value from 0 to 20.\n");
        return 1;
    }

    printf("Factorial of %d = %lld\n", number, factorial(number));
    return 0;
}
