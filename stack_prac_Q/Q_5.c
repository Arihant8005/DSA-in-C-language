//Write a C program to check whether a stack is EMPTY or NOT EMPTY using the isEmpty() function.

#include <stdio.h>

#define SIZE 5

int stack[SIZE];
int top = -1;

int isEmpty()
{
    if(top == -1)
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
    if(isEmpty())
    {
        printf("Stack is Empty\n");
    }
    else
    {
        printf("Stack is Not Empty\n");
    }

    return 0;
}