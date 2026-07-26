//Write a C function to display all elements of the queue.

#include<stdio.h>

int queue[5];
int front = -1;
int rear = -1;

void enqueue(int data){
    if(rear == 4){
        printf("Queue is overflow");
    }
    else{
        if(front == -1){
            front = 0;
        }
        rear++;
        queue[rear] = data;
    }
}
void display(){
    if(front == -1){
        printf("Queue is empty");
    }
    else{
        for(int i = front; i <= rear; i++){
            printf("%d\t",queue[i]);
        }
    }
}
int main(){
    enqueue(10);
    enqueue(20);
    enqueue(30);
    printf("Queue elements : ");
    display();
}