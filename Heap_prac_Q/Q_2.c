//Write a C program to delete the root element (maximum element) from a Max Heap and display the heap after deletion.

#include <stdio.h>

#define SIZE 10

int heap[SIZE];
int n = 0;

void insert(int value)
{
    int i = n;
    int temp;

    heap[i] = value;
    n++;

    while(i > 0)
    {
        int parent = (i - 1) / 2;

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

void deleteRoot()
{
    int i = 0;
    int left, right, largest, temp;

    if(n == 0)
    {
        printf("Heap is Empty\n");
        return;
    }

    printf("Deleted element = %d\n", heap[0]);

    heap[0] = heap[n - 1];
    n--;

    while(1)
    {
        left = 2 * i + 1;
        right = 2 * i + 2;
        largest = i;

        if(left < n && heap[left] > heap[largest])
        {
            largest = left;
        }

        if(right < n && heap[right] > heap[largest])
        {
            largest = right;
        }

        if(largest != i)
        {
            temp = heap[i];
            heap[i] = heap[largest];
            heap[largest] = temp;

            i = largest;
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

    printf("Heap elements:\n");

    for(i = 0; i < n; i++)
    {
        printf("%d ", heap[i]);
    }

    printf("\n");
}

int main()
{
    insert(40);
    insert(20);
    insert(50);
    insert(10);
    insert(60);

    printf("Before Deletion:\n");
    display();

    deleteRoot();

    printf("After Deletion:\n");
    display();

    return 0;
}