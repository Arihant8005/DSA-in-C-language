// Write a function for circular queue that returns: 1 if the queue is empty and 0 if the queue is not empty


#include <stdio.h>

int front = -1;

int isEmpty()
{
    if (front == -1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    if (isEmpty())
    {
        printf("Queue is empty");
    }
    else
    {
        printf("Queue is not empty");
    }

    return 0;
}