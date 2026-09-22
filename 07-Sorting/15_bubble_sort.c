#include<stdio.h>

void bubbleSort(int arr[], int size) {
    for (int step = 0; step < size - 1; step++) {
        for (int j = 0; j < size - step - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    int data[] = {64, 34, 25, 12, 22, 11, 90};
    int size = sizeof(data) / sizeof(data[0]);
    bubbleSort(data, size);
    printf("Sorted array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", data[i]);
    }
    return 0;
}
