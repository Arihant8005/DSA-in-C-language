#include<stdio.h>

int stack1[5];
int stack2[5];
int stack3[5];

int top1 = -1;
int top2 = -1;
int top3 = -1;

void push1(int data){
    top1++;
    stack1[top1] = data;
}
int pop1(){
    int value = stack1[top1];
    top1--;
    return value;
}
void push2(int data){
    top2++;
    stack2[top2] = data;
}
int pop2(){
    int value = stack2[top2];
    top2--;
    return value;
}

void display(){
    if(top1 == -1){
        printf("empty");
    }
    else{
        for(int i = top1; i >= 0; i--){
            printf("%d\n",stack1[i]);
        }
    }
}
void insert_bottom(int data){
    while(top1 != -1){
        push2(pop1());
    }
    push2(data);
    while(top2 != -1){
        push1(pop2());
    }

}
int main(){

    push1(1);
    push1(2);
    push1(3);
    push1(4);

    printf("original stack: \n");
    display();

    insert_bottom(78);
    printf("inserted stack: \n");
    display();
}