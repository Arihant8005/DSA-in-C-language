//Write a C function to reverse all elements of the queue.

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

void display()
{
    if(front == -1)
    {
        printf("Queue is empty\n");
    }
    else
    {
        for(int i = front; i <= rear; i++)
        {
            printf("%d ", queue[i]);
        }
        printf("\n");
    }
}

void reverse()
{
    if(front == -1)
    {
        printf("Queue is empty\n");
    }
    else
    {
        int start = front;
        int end = rear;
        int temp;

        while(start < end)
        {
            temp = queue[start];
            queue[start] = queue[end];
            queue[end] = temp;

            start++;
            end--;
        }

        printf("Queue reversed successfully\n");
    }
}

int main()
{
    enqueue(10);
    enqueue(20);
    enqueue(30);
    enqueue(40);

    printf("Original Queue: ");
    display();

    reverse();

    printf("Reversed Queue: ");
    display();

    return 0;
}