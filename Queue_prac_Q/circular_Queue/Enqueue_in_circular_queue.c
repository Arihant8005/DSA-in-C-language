// perform enqueue operation in a circular queue

#include <stdio.h>

int queue[5];
int front = -1, rear = -1;

void enqueue(int data)
{
    if ((rear + 1) % 5 == front)
    {
        printf("Queue Overflow\n");
    }
    else
    {
        if (front == -1)
        {
            front = rear = 0;
        }
        else
        {
            rear = (rear + 1) % 5;
        }

        queue[rear] = data;
        printf("%d inserted into queue\n", data);
    }
}

int main()
{
    enqueue(10);
    enqueue(20);
    enqueue(30);

    return 0;
}