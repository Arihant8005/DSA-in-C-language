// delete last node of a linked list

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
    struct node *delete_node = NULL;

    int n;

    printf("Enter the number of nodes: ");
    scanf("%d", &n);

    printf("Enter data: ");

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

    if(head == NULL){
        printf("Linked list is empty");
    }
    else if(head->link == NULL){
        free(head);
        head = NULL;
    }
    else{
        temp = head;
        for(int j = 0; j < n - 2; j++){
            temp = temp->link;
        }

        delete_node = temp->link;
        temp->link = NULL;
        free(delete_node);
    }
    printf("Linked List: ");

    temp = head;

    while(temp != NULL){
        printf("%d -> ", temp->data);
        temp = temp->link;
    }
    printf("NULL");
}