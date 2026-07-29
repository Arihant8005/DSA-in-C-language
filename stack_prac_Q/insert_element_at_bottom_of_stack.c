//Write a C program to insert an element at the bottom of a stack using another temporary stack.

#include <stdio.h>

int stack1[6];
int stack2[6];

int top1 = -1;
int top2 = -1;

// Push into Stack 1
void push1(int data)
{
    if(top1 == 5)
    {
        printf("Stack 1 Overflow\n");
        return;
    }

    top1++;
    stack1[top1] = data;
}

// Pop from Stack 1
int pop1()
{
    if(top1 == -1)
    {
        printf("Stack 1 Underflow\n");
        return -1;
    }

    int value = stack1[top1];
    top1--;

    return value;
}

// Push into Stack 2
void push2(int data)
{
    if(top2 == 5)
    {
        printf("Stack 2 Overflow\n");
        return;
    }

    top2++;
    stack2[top2] = data;
}

// Pop from Stack 2
int pop2()
{
    if(top2 == -1)
    {
        printf("Stack 2 Underflow\n");
        return -1;
    }

    int value = stack2[top2];
    top2--;

    return value;
}

// Insert Element at Bottom
void insertBottom(int data)
{
    // Move all elements from Stack 1 to Stack 2
    while(top1 != -1)
    {
        push2(pop1());
    }

    // Push new element into Stack 1
    push1(data);

    // Move all elements back to Stack 1
    while(top2 != -1)
    {
        push1(pop2());
    }
}

// Display Stack 1
void display()
{
    if(top1 == -1)
    {
        printf("Stack is Empty\n");
        return;
    }

    for(int i = top1; i >= 0; i--)
    {
        printf("%d\n", stack1[i]);
    }
}

int main()
{
    push1(10);
    push1(20);
    push1(30);
    push1(40);

    printf("Original Stack:\n");
    display();

    insertBottom(5);

    printf("\nStack After Inserting at Bottom:\n");
    display();

    return 0;
}