#include <stdio.h>

#define SIZE 5

static int queue[SIZE];
static int front = -1;
static int rear = -1;

static void enqueue(int value)
{
    if (rear == SIZE - 1) {
        printf("Queue is full\n");
        return;
    }
    if (front == -1) front = 0;
    queue[++rear] = value;
    printf("Inserted = %d\n", value);
}

static void dequeue(void)
{
    if (front == -1) {
        printf("Queue is empty\n");
        return;
    }

    printf("Deleted = %d\n", queue[front++]);
    if (front > rear) front = rear = -1;
}

static void display(void)
{
    if (front == -1) {
        printf("Queue is empty\n");
        return;
    }

    printf("Queue: ");
    for (int i = front; i <= rear; ++i)
        printf("%d%s", queue[i], i == rear ? "\n" : " ");
}

int main(void)
{
    dequeue();
    enqueue(10);
    enqueue(20);
    enqueue(30);
    enqueue(60);
    display();

    dequeue();
    display();

    return 0;
}
