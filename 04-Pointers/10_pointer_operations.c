#include <stdio.h>

int main(void)
{
    int number = 50;
    int value = 10;
    int *pointer = &number;
    int **pointer_to_pointer = &pointer;

    printf("Initial: number=%d, value=%d\n", number, value);
    printf("*pointer = %d\n", *pointer);

    *pointer = 25;
    printf("After *pointer = 25: number=%d\n", number);

    **pointer_to_pointer = 50;
    printf("After **pointer_to_pointer = 50: number=%d\n", number);

    return 0;
}
