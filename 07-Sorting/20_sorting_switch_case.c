#include <stdio.h>

static void bubble_sort(int a[], int n)
{
    for (int i = 0; i < n - 1; ++i)
        for (int j = 0; j < n - i - 1; ++j)
            if (a[j] > a[j + 1]) {
                int t = a[j]; a[j] = a[j + 1]; a[j + 1] = t;
            }
}

static void selection_sort(int a[], int n)
{
    for (int i = 0; i < n - 1; ++i) {
        int min_index = i;
        for (int j = i + 1; j < n; ++j)
            if (a[j] < a[min_index]) min_index = j;
        int t = a[i]; a[i] = a[min_index]; a[min_index] = t;
    }
}

static void insertion_sort(int a[], int n)
{
    for (int i = 1; i < n; ++i) {
        int key = a[i], j = i - 1;
        while (j >= 0 && a[j] > key) { a[j + 1] = a[j]; --j; }
        a[j + 1] = key;
    }
}

static void print_array(const int a[], int n)
{
    for (int i = 0; i < n; ++i) printf("%d%s", a[i], i + 1 == n ? "\n" : " ");
}

int main(void)
{
    int a[100], n, choice;

    printf("Enter number of elements: ");
    if (scanf("%d", &n) != 1 || n <= 0 || n > 100) return 1;

    printf("Enter elements: ");
    for (int i = 0; i < n; ++i)
        if (scanf("%d", &a[i]) != 1) return 1;

    printf("\n1. Bubble Sort\n2. Selection Sort\n3. Insertion Sort\n");
    printf("Choose sorting method: ");
    if (scanf("%d", &choice) != 1) return 1;

    switch (choice) {
        case 1: bubble_sort(a, n); break;
        case 2: selection_sort(a, n); break;
        case 3: insertion_sort(a, n); break;
        default: printf("Invalid choice.\n"); return 1;
    }

    printf("Sorted array: ");
    print_array(a, n);
    return 0;
}
