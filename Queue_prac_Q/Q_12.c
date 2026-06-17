// Display elements of a queue using circular queue

#include <stdio.h>

int queue[5] = {10, 20, 30};
int front = 0, rear = 2;

void display()
{
    if (front == -1)
    {
        printf("Queue is empty\n");
    }
    else
    {
        int i = front;

        while (i != rear)
        {
            printf("%d ", queue[i]);
            i = (i + 1) % 5;
        }

        printf("%d", queue[rear]);
    }
}

int main()
{
    printf("Queue elements: ");
    display();

    return 0;
}