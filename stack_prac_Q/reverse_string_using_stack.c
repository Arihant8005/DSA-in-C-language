#include <stdio.h>
#include <string.h>

char stack[100];
int top = -1;

// Push into Stack
void push(char ch)
{
    if(top == 99)
    {
        printf("Stack Overflow\n");
        return;
    }

    top++;
    stack[top] = ch;
}

// Pop from Stack
char pop()
{
    if(top == -1)
    {
        printf("Stack Underflow\n");
        return '\0';
    }

    char value = stack[top];
    top--;

    return value;
}

// Reverse String
void reverseString(char str[])
{
    int i;

    // Push each character into the stack
    for(i = 0; str[i] != '\0'; i++)
    {
        push(str[i]);
    }

    // Pop characters back into the string
    for(i = 0; str[i] != '\0'; i++)
    {
        str[i] = pop();
    }
}

// Main Function
int main()
{
    char str[100];

    printf("Enter a String: ");
    scanf("%s", str);

    printf("\nOriginal String: %s\n", str);

    reverseString(str);

    printf("Reversed String: %s\n", str);

    return 0;
}