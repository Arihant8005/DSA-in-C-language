#include<stdio.h>

# define size 5
int stack[size];
int top = -1;

void push(int data){
    if(top == size - 1){
        printf("overflow");
    }
    top++;
    stack[top] = data;
}
void pop(){
    if(top == -1){
        printf("stack is empty");
    }
    printf("%d element is poped\n",stack[top]);
    top--;
}

void count(){
    int count = 0;
    if(top == -1){
        printf("stack is empty");
    }
    for(int i = top; i >= 0; i--){
        count++;
    }
    printf("Number of elements: %d",count);
}
int main(){
    push(12);
    push(13);
    push(14);
    push(15);
    pop();
    count();
}