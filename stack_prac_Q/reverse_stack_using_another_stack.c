//"Reverse Stack 1 using Stack 2 and keep the result in Stack 1"

#include <stdio.h>

int stack1[5];
int stack2[5];

int top1 = -1;
int top2 = -1;

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

void display1()
{
    int i;

    for(i = top1; i >= 0; i--)
    {
        printf("%d\n", stack1[i]);
    }
}


// Reverse Stack 1 using Stack 2
void reverseStack()
{
    int temp[5];
    int i = 0;

    // Move stack1 to stack2
    while(top1 != -1)
    {
        push2(pop1());
    }

    // Move stack2 to temporary array
    while(top2 != -1)
    {
        temp[i] = pop2();
        i++;
    }

    // Put elements back into stack1
    for(i = 0; i < 4; i++)
    {
        push1(temp[i]);
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