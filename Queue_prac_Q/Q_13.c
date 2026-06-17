// Perform peek operation in a circular queue

#include <stdio.h>

int queue[5] = {10, 20, 30};
int front = 0, rear = 2;

void peek()
{
    if (front == -1)
    {
        printf("Queue is empty\n");
    }
    else
    {
        printf("Front element: %d", queue[front]);
    }
}

int main()
{
    peek();

    return 0;
}