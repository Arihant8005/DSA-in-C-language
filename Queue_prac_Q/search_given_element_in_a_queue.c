//Write a C function to search for a given element in the queue.


#include <stdio.h>

int queue[5];
int front = -1;
int rear = -1;

void enqueue(int data)
{
    if(rear == 4)
    {
        printf("Queue Overflow\n");
    }
    else
    {
        if(front == -1)
        {
            front = 0;
        }

        rear++;
        queue[rear] = data;
    }
}
void search(int key)
{
    if(front == -1)
    {
        printf("Queue is empty\n");
    }
    else
    {
        int found = 0;

        for(int i = front; i <= rear; i++)
        {
            if(queue[i] == key)
            {
                printf("Element found at position %d\n", i - front + 1);
                found = 1;
                break;
            }
        }

        if(found == 0)
        {
            printf("Element not found\n");
        }
    }
}

int main()
{
    enqueue(10);
    enqueue(20);
    enqueue(30);

    search(20);
    search(50);
}