#include <stdio.h>
int main () {
    int number [5] = {5, 10, 15, 20, 25};
    for (int i = 0; i < 5; i++) {
        printf ("Index %d -> %d\n", i, number [i]);
    }
    return 0;
}
