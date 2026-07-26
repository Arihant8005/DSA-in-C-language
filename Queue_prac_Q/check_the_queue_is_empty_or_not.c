// Write a function that returns: 1 if the queue is empty and 0 if the queue is not empty

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

int isEmpty(){
    if(front == -1){
        return 1;
    }
    else{
        return 0;
    }
}

int main(){
    enqueue(10);
    isEmpty();
    if(isEmpty()){
        printf("Queue is empty");
    }
    else{
        printf("Queue is not empty because it contains %d",queue[front]);
    }
}