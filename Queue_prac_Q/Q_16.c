//count the number of elements in a circular queue

#include <stdio.h>

int front = 0, rear = 2;

int count()
{
    if (front == -1)
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
    printf("Number of elements: %d", count());

    return 0;
}