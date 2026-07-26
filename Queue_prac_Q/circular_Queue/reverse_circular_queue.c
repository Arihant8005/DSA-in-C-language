// reverse for a given element in circular queue

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
void reverse()
{
    if(front == -1)
    {
        printf("Queue is empty");
        return;
    }

    int count = (rear - front + 5) % 5 + 1;

    int start = front;
    int end = rear;
    int temp;

    for(int i = 0; i < count / 2; i++)
    {
        temp = queue[start];
        queue[start] = queue[end];
        queue[end] = temp;

        start = (start + 1) % 5;
        end = (end - 1 + 5) % 5;
    }
}
void display()
{
    if (front == -1)
    {
        printf("Queue is empty\n");
        return;
    }

    int i = front;

    while (1)           // always true
    {
        printf("%d ", queue[i]);

        if (i == rear)
            break;

        i = (i + 1) % 5;
    }
}

int main(){
    enqueue(12);
    enqueue(13);
    enqueue(14);
    dequeue();
    enqueue(15);
    reverse();
    printf("reverse queue: ");
    display();
}