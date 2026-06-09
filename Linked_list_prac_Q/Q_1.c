//Create One Node in a singly linked list

#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *p;    //Stores the address of the next node.
};
int main(){
    struct node *head;
    head = (struct node *)malloc(sizeof(struct node));   
    head -> data = 20;
    head -> p = NULL;
    printf("%d", head -> data);

}

// head
//  ↓
// +------+------+
// |  10  | NULL |
// +------+------+