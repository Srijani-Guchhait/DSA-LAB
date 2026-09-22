#include <stdio.h>

int main() {
    int n, target, i;
    int found = -1;
    
    printf("Enter array size: ");
    scanf("%d", &n);
    
    int arr[n];
    int *ptr = arr;
    
    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", ptr + i);
    }
    
    printf("Enter element to search: ");
    scanf("%d", &target);
    
    for (i = 0; i < n; i++) {
        if (*(ptr + i) == target) {
            found = i;
            break;
        }
    }
    
    if (found != -1) {
        printf("Element %d found at index %d\n", target, found);
    } else {
        printf("Element %d not found \n", target);
    }
    
    return 0;
}
