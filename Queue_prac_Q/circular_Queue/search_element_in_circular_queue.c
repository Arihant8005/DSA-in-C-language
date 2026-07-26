// search for a given element in circular queue

#include<stdio.h>

int queue[5];
int front = -1;
int rear = -1;

void enqueue(int data){
    if(front == (rear + 1) % 5){
        printf("overflow");
    }
    else{
        if(front == -1){
            front = rear = 0;
        }
        else{
            rear = (rear+1) % 5;
        }
        queue[rear] = data;
        printf("%d is inserted\n",data);
    }
}

void dequeue(){
    if(front == -1){
        printf("underflow");
    }
    else{
        printf("%d is deleted\n",queue[front]);
        if(front == rear){
            front = rear =  -1;
        }
        else{
            front = (front+1) % 5;
        }
    }
}
void search(int key)
{
    if (front == -1)
    {
        printf("Queue is empty\n");
        return;
    }

    int i = front;

    while (1)
    {
        if (queue[i] == key)
        {
            printf("Element found at index %d\n", i);
            return;
        }

        if (i == rear)
            break;

        i = (i + 1) % 5;
    }

    printf("Element not found\n");
}

int main(){
    enqueue(12);
    enqueue(13);
    enqueue(14);
    dequeue();
    enqueue(15);
    search(13);
}