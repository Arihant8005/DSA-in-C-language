// search a element in a circular queue

#include <stdio.h>

int queue[5] = {10, 20, 30};
int front = 0, rear = 2;

void search(int key)
{
    if (front == -1)
    {
        printf("Queue is empty");
    }
    else
    {
        int found = 0;

        for (int i = front; i <= rear; i++)
        {
            if (queue[i] == key)
            {
                printf("Element found");
                found = 1;
                break;
            }
        }

        if (found == 0)
        {
            printf("Element not found");
        }
    }
}

int main()
{
    search(20);

    return 0;
}