// reverse a circular queue

#include <stdio.h>

int queue[5] = {10, 20, 30, 40};
int front = 0, rear = 3;

void reverse()
{
    int start = front;
    int end = rear;
    int temp;

    while (start < end)
    {
        temp = queue[start];
        queue[start] = queue[end];
        queue[end] = temp;

        start++;
        end--;
    }
}

void display()
{
    for (int i = front; i <= rear; i++)
    {
        printf("%d ", queue[i]);
    }
}

int main()
{
    reverse();
    display();

    return 0;
}