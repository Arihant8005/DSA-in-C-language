//Write a C program to POP (delete) one element from a stack and display the remaining elements.

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

void pop()
{
    if(top == -1)
    {
        printf("Stack Underflow\n");
    }
    else
    {
        printf("Deleted element: %d\n", stack[top]);
        top--;
    }
}

void display()
{
    int i;

    if(top == -1)
    {
        printf("Stack is empty\n");
    }
    else
    {
        printf("Stack elements are:\n");

        for(i = top; i >= 0; i--)
        {
            printf("%d\n", stack[i]);
        }
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

    pop();

    display();

    return 0;
}