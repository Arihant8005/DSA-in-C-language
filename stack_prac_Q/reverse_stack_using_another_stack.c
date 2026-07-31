#include <stdio.h>

int stack1[5], stack2[5], stack3[5];
int top1 = -1, top2 = -1, top3 = -1;

// Stack 1
void push1(int data)
{
    top1++;
    stack1[top1] = data;
}

int pop1()
{
    int value = stack1[top1];
    top1--;
    return value;
}

// Stack 2
void push2(int data)
{
    top2++;
    stack2[top2] = data;
}

int pop2()
{
    int value = stack2[top2];
    top2--;
    return value;
}

// Stack 3
void push3(int data)
{
    top3++;
    stack3[top3] = data;
}

int pop3()
{
    int value = stack3[top3];
    top3--;
    return value;
}

// Display Stack 1
void display1()
{
    int i;

    for(i = top1; i >= 0; i--)
    {
        printf("%d\n", stack1[i]);
    }
}

// Reverse Stack 1
void reverseStack()
{
    // Stack1 -> Stack2
    while(top1 != -1)
    {
        push2(pop1());
    }

    // Stack2 -> Stack3
    while(top2 != -1)
    {
        push3(pop2());
    }

    // Stack3 -> Stack1
    while(top3 != -1)
    {
        push1(pop3());
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