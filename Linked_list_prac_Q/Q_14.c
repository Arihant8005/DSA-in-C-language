// delete first node of a linked list

#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *link;
};
int main(){
    struct node*head = NULL;
    struct node *temp = NULL;
    struct node *new_node = NULL;

    int n;
    printf("Enter the number of node: ");
    scanf("%d",&n);

    printf("Enter data: ");

    for(int i = 0; i < n; i++){
        new_node = (struct node *)malloc(sizeof(struct node));
        scanf("%d",&new_node -> data);

        new_node -> link = NULL;

        if(head == NULL){
            head = new_node;
            temp = head;
        }
        else{
            temp -> link = new_node;
            temp = new_node;
        }
    }
    if(head == NULL){
        printf("Linked list is empty\n");
    }
    else{
        temp = head;
        head = head -> link;
        free(temp);
    }
    printf("linked list: ");
    temp = head;

    while(temp != NULL){
        printf("%d -> ",temp -> data);
        temp = temp -> link;
    }
    printf("NULL");

}