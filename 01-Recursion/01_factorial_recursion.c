#include <stdio.h>

int factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    }
    else
        return (n * factorial(n - 1));
}

int main() {
    int number;
    printf("Enter the number: ");
    scanf("%d", &number);
    printf("Factorial of %d is %d", number, factorial(number));

    return 0;
}
