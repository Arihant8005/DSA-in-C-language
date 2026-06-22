//Count the Number of Elements in a Stack

#include <stdio.h>

#define SIZE 5

int stack[SIZE];
int top = -1;

void push(int data)
{
    if(top == SIZE - 1)
    {
        printf("Stack Overflow\n");
    }
    else
    {
        top++;
        stack[top] = data;
    }
}

int count()
{
    return top + 1;
}

int main()
{
    int i, data;

    printf("Enter 5 elements:\n");

    for(i = 0; i < SIZE; i++)
    {
        scanf("%d", &data);
        push(data);
    }

    printf("Total elements in stack = %d\n", count());

    return 0;
}