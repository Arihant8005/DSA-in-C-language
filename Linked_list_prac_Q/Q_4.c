// count the number of node in a linked list

#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node * link;
};
int main(){
    struct node *head = NULL;
    struct node *temp = NULL;
    struct node *new_node = NULL;

    printf("Enter the elements of linked list : ");
    int count = 0;

    for(int i = 1; i <= 5; i++){
        new_node = (struct node *)malloc(sizeof(struct node));
        scanf("%d", &new_node -> data);

        new_node -> link = NULL;
        if(head == NULL){
            head = new_node;
            temp = head;
        }
        else{
            temp -> link = new_node;
            temp = temp -> link;
        }

    }
    
    temp = head;

    while(temp != NULL){
        count++;
        temp = temp -> link;
    }

    printf("Number of nodes in the linked list: %d\n", count);
}