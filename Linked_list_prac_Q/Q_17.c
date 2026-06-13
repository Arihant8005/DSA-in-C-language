// reverse a linked list using three pointers

#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *link;
};

int main(){

    struct node *head = NULL;
    struct node *temp = NULL;
    struct node *new_node = NULL;

    struct node *prev = NULL;
    struct node *current = NULL;
    struct node *next = NULL;

    int n;

    printf("Enter number of nodes: ");
    scanf("%d", &n);

    printf("Enter data: ");

    // Create linked list
    for(int i = 0; i < n; i++){

        new_node = (struct node *)malloc(sizeof(struct node));

        scanf("%d", &new_node->data);

        new_node->link = NULL;

        if(head == NULL){
            head = new_node;
            temp = head;
        }
        else{
            temp->link = new_node;
            temp = new_node;
        }
    }

    // Reverse linked list
    prev = NULL;
    current = head;

    while(current != NULL){

        next = current->link;

        current->link = prev;

        prev = current;

        current = next;
    }

    head = prev;

    // Display reversed list
    printf("Reversed Linked List: ");

    temp = head;

    while(temp != NULL){

        printf("%d -> ", temp->data);

        temp = temp->link;
    }

    printf("NULL");

    return 0;
}