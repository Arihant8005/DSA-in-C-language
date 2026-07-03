//Write a C program to find the maximum element in a Max Heap and display it.

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

void findMax()
{
    if(n == 0)
    {
        printf("Heap is Empty\n");
    }
    else
    {
        printf("Maximum Element = %d\n", heap[0]);
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

    findMax();

    return 0;
}