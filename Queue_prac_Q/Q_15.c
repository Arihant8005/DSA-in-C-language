// check that circular queue is full or not

#include <stdio.h>

int front = 0, rear = 4;

int isFull()
{
    if ((rear + 1) % 5 == front)
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
    if (isFull())
    {
        printf("Queue is full");
    }
    else
    {
        printf("Queue is not full");
    }

    return 0;
}