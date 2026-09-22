#include <stdio.h>

#define MAX 5

static int stack[MAX];
static int top = -1;

static int is_full(void) { return top == MAX - 1; }
static int is_empty(void) { return top == -1; }

static void push(int value)
{
    if (is_full()) {
        printf("Stack overflow\n");
        return;
    }
    stack[++top] = value;
    printf("Pushed %d\n", value);
}

static int pop(void)
{
    if (is_empty()) {
        printf("Stack underflow\n");
        return -1;
    }
    return stack[top--];
}

static int peek(void)
{
    if (is_empty()) return -1;
    return stack[top];
}

static void display(void)
{
    if (is_empty()) {
        printf("Stack is empty\n");
        return;
    }

    printf("Stack (top to bottom): ");
    for (int i = top; i >= 0; --i)
        printf("%d%s", stack[i], i == 0 ? "\n" : " ");
}

int main(void)
{
    push(10);
    push(20);
    push(30);
    display();

    printf("Top element = %d\n", peek());
    printf("Popped = %d\n", pop());
    display();

    return 0;
}
