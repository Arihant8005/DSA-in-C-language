// Write a function that returns: 
// 1 if the queue is full.
// 0 if the queue is not full.

#include<stdio.h>

int queue[5];
int front = -1;
int rear = -1;

void enqueue(int data)
{
    if(rear == 4)
    {
        printf("Queue Overflow\n");
    }
    else
    {
        if(front == -1)
        {
            front = 0;
        }

        rear++;
        queue[rear] = data;
    }
}

int isFull()
{
    return (rear == 4);
}

int main()
{
    enqueue(10);
    enqueue(20);
    enqueue(30);
    enqueue(40);
    enqueue(50);

    if(isFull())
    {
        printf("Queue is full");
    }
    else
    {
        printf("Queue is not full");
    }

    return 0;
}