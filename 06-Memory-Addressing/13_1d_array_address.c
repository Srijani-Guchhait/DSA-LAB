#include <stdio.h>

int main() {
    int B, index, size_dt;
    printf("Enter Base Address (B): ");
    scanf("%d", &B);
    printf("Enter index: ");
    scanf("%d", &index);
    printf("Enter the size of data type in bytes (size_dt): ");
    scanf("%d", &size_dt);
    
    int address = B + (index * size_dt);
    printf("The calculated address of the element is : %d\n", address);
    
    return 0;
}
