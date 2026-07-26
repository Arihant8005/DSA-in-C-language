//Write a C function to delete an element from the queue using an array

#include <stdio.h>

int queue[5];
int front = -1;
int rear = -1;

void enqueue(int data);
void dequeue();

int main()
{
    enqueue(10);
    enqueue(20);
    enqueue(30);

    dequeue();
    dequeue();

    return 0;
}

void enqueue(int data)
{
    if (rear == 4)
    {
        printf("Queue Overflow\n");
    }
    else
    {
        if (front == -1)
        {
            front = 0;
        }

        rear++;
        queue[rear] = data;

        printf("%d is inserted in queue\n", data);
    }
}

void dequeue()
{
    if (front == -1)
    {
        printf("Queue Underflow\n");
    }
    else
    {
        printf("%d is deleted from queue\n", queue[front]);

        if (front == rear)
        {
            front = rear = -1;
        }
        else
        {
            front++;
        }
    }
}