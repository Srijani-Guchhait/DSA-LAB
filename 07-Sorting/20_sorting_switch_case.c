#include <stdio.h>

void bubbleSort(int array[], int size) {
    for (int step = 0; step < size - 1; ++step) {
        for (int i = 0; i < size - step - 1; ++i) {
            if (array[i] > array[i + 1]) {
                int temp = array[i];
                array[i] = array[i + 1];
                array[i + 1] = temp;
            }
        }
    }
}

void selectionSort(int array[], int size) {
    for (int step = 0; step < size - 1; step++) {
        int min_idx = step;
        for (int i = step + 1; i < size; i++) {
            if (array[i] < array[min_idx]) {
                min_idx = i;
            }
        }
        int temp = array[min_idx];
        array[min_idx] = array[step];
        array[step] = temp;
    }
}

void insertionSort(int array[], int size) {
    for (int step = 1; step < size; step++) {
        int key = array[step];
        int i = step - 1;
        while (i >= 0 && key < array[i]) {
            array[i + 1] = array[i];
            --i;
        }
        array[i + 1] = key;
    }
}

int main() {
    int size, choice;
    printf("Enter size of array: ");
    scanf("%d", &size);
    
    int data[size];
    printf("Enter %d elements:\n", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &data[i]);
    }
    
    printf("choose sorting technique:\n");
    printf("1. Bubble Sort\n");
    printf("2. Selection Sort\n");
    printf("3. Insertion Sort\n");
    printf("Enter choice: ");
    scanf("%d", &choice);
    
    switch (choice) {
        case 1:
            bubbleSort(data, size);
            break;
        case 2:
            selectionSort(data, size);
            break;
        case 3:
            insertionSort(data, size);
            break;
        default:
            printf("Invalid choice!\n");
            return 1;
    }
    
    printf("Sorted Array:\n");
    for (int i = 0; i < size; ++i) {
        printf("%d ", data[i]);
    }
    printf("\n");
    return 0;
}
