//Write a C program to check whether a Max Heap is empty or not using an isEmpty() function.

#include <stdio.h>

#define SIZE 10

int heap[SIZE];
int n = 0;

void insert(int value)
{
    int i = n;
    int parent, temp;

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

int isEmpty()
{
    if(n == 0)
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
    int i, value;

    printf("Enter 5 elements:\n");

    for(i = 0; i < 5; i++)
    {
        scanf("%d", &value);
        insert(value);
    }

    if(isEmpty())
    {
        printf("Heap is Empty\n");
    }
    else
    {
        printf("Heap is Not Empty\n");
    }

    return 0;
}