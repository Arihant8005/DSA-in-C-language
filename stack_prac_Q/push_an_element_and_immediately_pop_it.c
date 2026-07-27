//Write a C program to push an element into the stack and then immediately pop one element from the stack. Display the deleted element.

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

int main()
{
    int data;

    printf("Enter an element: ");
    scanf("%d", &data);

    push(data);

    pop();

    return 0;
}