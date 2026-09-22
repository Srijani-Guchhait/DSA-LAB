#include <stdio.h>

int main() {
    int B, W, I, J, LR, LC, N;

    printf("Enter the Base Address (B): ");
    scanf("%d", &B);

    printf("Enter the size of the data type in bytes (W): ");
    scanf("%d", &W);

    printf("Enter the target row to be found (I): ");
    scanf("%d", &I);

    printf("Enter the target column to be found (J): ");
    scanf("%d", &J);

    printf("Enter the lowest index of Row/Lower Bound (LR): ");
    scanf("%d", &LR);

    printf("Enter the lowest index of Column/Lower Bound (LC): ");
    scanf("%d", &LC);

    printf("Enter the total Number of columns (N): ");
    scanf("%d", &N);

    int address = B + W * ((I - LR) * N + (J - LC));

    printf("\nThe calculated address for element A[%d][%d] is: %d\n", I, J, address);

    return 0;
}
