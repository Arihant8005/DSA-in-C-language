//Write a C program to check whether a Max Heap is full or not using an isFull() function.

#include <stdio.h>

#define SIZE 10

int heap[SIZE];
int n = 0;

void insert(int value)
{
    int i = n;
    int parent, temp;

    if(n == SIZE)
    {
        printf("Heap Overflow\n");
        return;
    }

    heap[i] = value;
    n++;

    while(i > 0)
    {
        parent = (i - 1) / 2;

        if(heap[parent] < heap[i])
        {
            temp = heap[parent];
            heap[parent] = heap[i];
            heap[i] = temp;

            i = parent;
        }
        else
        {
            break;
        }
    }
}

int isFull()
{
    if(n == SIZE)
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
    int i;

    printf("Inserting 10 elements...\n");

    for(i = 1; i <= SIZE; i++)
    {
        insert(i * 10);
    }

    if(isFull())
    {
        printf("Heap is Full\n");
    }
    else
    {
        printf("Heap is Not Full\n");
    }

    return 0;
}