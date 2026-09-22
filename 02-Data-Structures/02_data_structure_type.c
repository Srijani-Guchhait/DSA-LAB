#include <stdio.h>

int main(void)
{
    int choice;

    printf("1. Array\n");
    printf("2. Linked List\n");
    printf("3. Tree\n");
    printf("4. Graph\n");
    printf("Enter your choice: ");

    if (scanf("%d", &choice) != 1) {
        fprintf(stderr, "Invalid input.\n");
        return 1;
    }

    switch (choice) {
        case 1:
            printf("Array -> Static -> Linear -> Non-primitive\n");
            break;
        case 2:
            printf("Linked List -> Dynamic -> Linear -> Non-primitive\n");
            break;
        case 3:
            printf("Tree -> Dynamic -> Non-linear -> Non-primitive\n");
            break;
        case 4:
            printf("Graph -> Dynamic -> Non-linear -> Non-primitive\n");
            break;
        default:
            printf("Invalid choice.\n");
    }

    return 0;
}
