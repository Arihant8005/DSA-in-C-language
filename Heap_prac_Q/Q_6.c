//Write a C program to count the total number of elements (nodes) present in a Max Heap.

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

int countNodes()
{
    return n;
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

    printf("Total number of elements = %d\n", countNodes());

    return 0;
}