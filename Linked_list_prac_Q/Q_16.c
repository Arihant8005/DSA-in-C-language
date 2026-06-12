//delete a node from a specific position

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

    int n, pos;

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

    printf("Enter position of node that has to be deleted: ");
    scanf("%d", &pos);

    if(head == NULL){
        printf("Linked list is empty");
    }
    else if(pos == 1){

        temp = head;
        head = head->link;
        free(temp);
    }
    else{
        temp = head;

        for(int j = 0; j < pos - 2; j++){
            temp = temp->link;
        }
        delete_node = temp->link;
        temp->link = delete_node->link;
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