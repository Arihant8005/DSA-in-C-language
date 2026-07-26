// perform dequeue operation in circular queue

#include <stdio.h>

int queue[5] = {10, 20, 30};
int front = 0, rear = 2;

void dequeue()
{
    if (front == -1)
    {
        printf("Queue Underflow\n");
    }
    else
    {
        printf("%d deleted from queue\n", queue[front]);

        if (front == rear)
        {
            front = rear = -1;
        }
        else
        {
            front = (front + 1) % 5;
        }
    }
}

int main()
{
    dequeue();

    return 0;
}