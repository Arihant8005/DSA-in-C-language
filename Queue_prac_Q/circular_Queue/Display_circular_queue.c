// Display elements of a queue using circular queue

#include <stdio.h>

int queue[5] = {10, 20, 30};
int front = 0, rear = 2;

void display()
{
    if (front == -1)
    {
        printf("Queue is empty\n");
        return;
    }

    int i = front;

    while (1)           // always true
    {
        printf("%d ", queue[i]);

        if (i == rear)
            break;

        i = (i + 1) % 5;
    }
}

int main()
{
    printf("Queue elements: ");
    display();

    return 0;
}