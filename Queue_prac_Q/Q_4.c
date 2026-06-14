//Write a C function to display the front element of the queue without deleting it.

#include<stdio.h>

int queue[5];
int front = -1;
int rear = -1;

void enqueue(int data){
    if(rear == 4){
        printf("overflow");
    }
    else{
        if(front == -1){
            front = 0;
        }
        rear++;
        queue[rear] = data;
    }
}

void peek(){
    if(front == -1){
        printf("Queue is empty");
    }
    else{
        printf("%d",queue[front]);
    }
}

int main(){
    enqueue(10);
    enqueue(20);
    enqueue(30);
    printf("Front element : ");
    peek();
}