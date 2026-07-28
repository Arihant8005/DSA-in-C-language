//

#include <stdio.h>

int stack1[5];
int stack2[5];
int stack3[5];

int top1 = -1;
int top2 = -1;
int top3 = -1;

// Push into Stack 1
void push1(int data)
{
    if(top1 == 4)
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
    if(top2 == 4)
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

// Push into Stack 3
void push3(int data)
{
    if(top3 == 4)
    {
        printf("Stack 3 Overflow\n");
        return;
    }

    top3++;
    stack3[top3] = data;
}

// Pop from Stack 3
int pop3()
{
    if(top3 == -1)
    {
        printf("Stack 3 Underflow\n");
        return -1;
    }

    int value = stack3[top3];
    top3--;

    return value;
}

// Copy Stack 1 into Stack 3
void copyStack()
{
    // Move all elements from Stack 1 to Stack 2
    while(top1 != -1)
    {
        push2(pop1());
    }

    // Restore Stack 1 and copy to Stack 3
    while(top2 != -1)
    {
        int value = pop2();

        push1(value);
        push3(value);
    }
}

// Display Stack 1
void display1()
{
    if(top1 == -1)
    {
        printf("Stack 1 is Empty\n");
        return;
    }

    for(int i = top1; i >= 0; i--)
    {
        printf("%d\n", stack1[i]);
    }
}

// Display Stack 3
void display3()
{
    if(top3 == -1)
    {
        printf("Stack 3 is Empty\n");
        return;
    }

    for(int i = top3; i >= 0; i--)
    {
        printf("%d\n", stack3[i]);
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

    copyStack();

    printf("\nCopied Stack:\n");
    display3();

    printf("\nOriginal Stack After Copy:\n");
    display1();

    return 0;
}