//Create a Max Heap and Insert Elements

#include <stdio.h>

#define SIZE 10

int heap[SIZE];
int n = 0;

void insert(int value)
{
    int i, temp;

    i = n;
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