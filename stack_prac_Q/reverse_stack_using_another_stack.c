#include <stdio.h>

int stack1[5];
int stack2[5];

int top1 = -1;
int top2 = -1;

// Push into Stack 1
void push1(int data)
{
    if (top1 == 4)
    {
        printf("Stack 1 Overflow\n");
    }
    else
    {
        top1++;
        stack1[top1] = data;
    }
}

// Pop from Stack 1
int pop1()
{
    if (top1 == -1)
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
    if (top2 == 4)
    {
        printf("Stack 2 Overflow\n");
    }
    else
    {
        top2++;
        stack2[top2] = data;
    }
}

// Pop from Stack 2
int pop2()
{
    if (top2 == -1)
    {
        printf("Stack 2 Underflow\n");
        return -1;
    }

    int value = stack2[top2];
    top2--;
    return value;
}

// Display Stack 1
void display1()
{
    int i;

    if (top1 == -1)
    {
        printf("Stack 1 is Empty\n");
        return;
    }

    for (i = top1; i >= 0; i--)
    {
        printf("%d\n", stack1[i]);
    }
}

// Reverse Stack 1 using Stack 2
void reverseStack()
{
    while (top1 != -1)
    {
        push2(pop1());
    }

    while (top2 != -1)
    {
        push1(pop2());
    }
}

int main()
{
    push1(10);
    push1(20);
    push1(30);
    push1(40);

    printf("Original Stack:\n");
    display1();

    reverseStack();

    printf("\nReversed Stack:\n");
    display1();

    return 0;
}