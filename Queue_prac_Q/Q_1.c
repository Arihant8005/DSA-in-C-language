//Write a C function to insert an element into the queue using an array.
#include <stdio.h>

int queue[5];
int front = -1;
int rear = -1;

void enqueue(int data);

int main()
{
    enqueue(10);
    enqueue(20);
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