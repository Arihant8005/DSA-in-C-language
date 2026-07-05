//Write a C program to display all elements of a Max Heap stored in an array.

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

void display()
{
    int i;

    if(n == 0)
    {
        printf("Heap is Empty\n");
        return;
    }

    printf("Heap elements are:\n");

    for(i = 0; i < n; i++)
    {
        printf("%d ", heap[i]);
    }

    printf("\n");
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

    display();

    return 0;
}