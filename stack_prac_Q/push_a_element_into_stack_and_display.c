//Write a C program to:
// Create a stack of size 5 using an array.
// Take one integer input from the user.
// Push the element into the stack.
// Display the stack after insertion.

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
        printf("Element %d pushed into the stack.\n", data);
    }
}

void display()
{
    int i;

    if(top == -1)
    {
        printf("Stack is empty.\n");
    }
    else
    {
        printf("Stack elements:\n");

        for(i = top; i >= 0; i--)
        {
            printf("%d\n", stack[i]);
        }
    }
}

int main()
{
    int data;

    printf("Enter an element: ");
    scanf("%d", &data);

    push(data);

    display();

    return 0;
}