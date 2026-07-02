//Write a C program to build a Max Heap from an unsorted array and display the resulting heap.

#include <stdio.h>

#define SIZE 10

void heapify(int heap[], int n, int i)
{
    int largest = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;
    int temp;

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

        heapify(heap, n, largest);
    }
}

void buildHeap(int heap[], int n)
{
    int i;

    for(i = (n / 2) - 1; i >= 0; i--)
    {
        heapify(heap, n, i);
    }
}

void display(int heap[], int n)
{
    int i;

    printf("Max Heap:\n");

    for(i = 0; i < n; i++)
    {
        printf("%d ", heap[i]);
    }

    printf("\n");
}

int main()
{
    int heap[SIZE];
    int n = 5;
    int i;

    printf("Enter 5 elements:\n");

    for(i = 0; i < n; i++)
    {
        scanf("%d", &heap[i]);
    }

    buildHeap(heap, n);

    display(heap, n);

    return 0;
}