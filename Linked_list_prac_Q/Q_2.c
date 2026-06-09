//create two nodes and connect them

#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *p;
};
int main(){
    struct node *head;
    struct node *new_node;
    head = (struct node *)malloc(sizeof(struct node));
    head -> data = 10;
    head -> p = new_node;   //Connecting the first node to the second node.
    new_node = (struct node *)malloc(sizeof(struct node));
    new_node -> data = 20;
    new_node -> p = NULL;
    printf("%d\n",new_node -> data);
}