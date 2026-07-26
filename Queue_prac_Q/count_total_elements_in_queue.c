//Write a C function that returns the total number of elements currently present in the queue.

#include <stdio.h>

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

int count()
{
    if(front == -1)
    {
        return 0;
    }
    else
    {
        return rear - front + 1;
    }
}

int main()
{
    enqueue(10);
    enqueue(20);
    enqueue(30);

    printf("Number of elements in queue: %d", count());

    return 0;
}