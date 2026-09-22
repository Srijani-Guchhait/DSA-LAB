#include <stdio.h>

#define SIZE 5

int item[SIZE];
int front = -1;
int rear = -1;

void enqueue(int value)
{
    if (rear == SIZE - 1) {
        printf("Full\n");
    } else {
        if (front == -1) {
            front = 0;
        }
        rear++;
        item[rear] = value;
        printf("Inserted = %d\n", value);
    }
}

void deque(void)
{
    if (front == -1) {
        printf("Empty\n");
    } else {
        printf("Deleted = %d\n", item[front]);
        front++;

        if (front > rear) {
            front = rear = -1;
        }
    }
}

void display(void)
{
    if (rear == -1) {
        printf("Empty\n");
    } else {
        printf("The Que = ");
        for (int i = front; i <= rear; i++) {
            printf("%d ", item[i]);
        }
        printf("\n");
    }
}

int main(void)
{
    deque();
    enqueue(10);
    enqueue(20);
    enqueue(30);
    enqueue(60);
    display();

    deque();
    display();

    return 0;
}

