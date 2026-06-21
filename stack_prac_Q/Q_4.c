//Write a C program to display the TOP element of the stack using the PEEK operation.

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

void peek()
{
    if(top == -1)
    {
        printf("Stack is empty\n");
    }
    else
    {
        printf("Top element is: %d\n", stack[top]);
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

    peek();

    return 0;
}