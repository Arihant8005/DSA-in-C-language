//Write a C program to check whether a stack is FULL or NOT FULL using the isFull() function.

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

int isFull()
{
    if(top == SIZE - 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
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

    if(isFull())
    {
        printf("Stack is Full\n");
    }
    else
    {
        printf("Stack is Not Full\n");
    }

    return 0;
}