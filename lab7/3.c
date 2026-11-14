
#include <stdio.h>
#define SIZE 8

int stack[SIZE];
int top = -1;

void push(int value)

{
    if (top == SIZE - 1)
    {
        printf("Stack is full\n");
    }
    else
    {
        top++;
        stack[top] = value;
    }
}

void pop()
{
    if (top == -1)
    {
        printf("Stack is empty\n");
    }
    else
    {
        printf("Del: %d\n", stack[top]);
        top--;
    }
}

int main()
{
    push(50);
    push(60);
    push(70);

    pop();

    return 0;
}
