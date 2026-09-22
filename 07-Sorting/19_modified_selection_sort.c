#include <stdio.h>

void SelectionSort(int array[], int size) {
    for (int step = 0; step < size - 1; step++) {
        int min_idx = step;
        for (int i = step + 1; i < size; i++) {
            if (array[i] < array[min_idx]) {
                min_idx = i;
            }
        }
        if (min_idx != step) {
            int temp = array[min_idx];
            array[min_idx] = array[step];
            array[step] = temp;
        }
        
        printf("Iteration %d: ", step + 1);
        for (int i = 0; i < size; i++) {
            printf("%d ", array[i]);
        }
        printf("\n");
    }
}

int main() {
    int size;
    printf("Enter size of array: ");
    scanf("%d", &size);
    
    int data[size];
    printf("Enter %d elements:\n", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &data[i]);
    }
    
    SelectionSort(data, size);
    
    printf("Sorted Array\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", data[i]);
    }
    printf("\n");
    return 0;
}
