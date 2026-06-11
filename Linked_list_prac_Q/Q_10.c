//Reverse Display of a Linked List (Using an Array)

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
    int i = 0, a[10];
    
    printf("Enter thr elements in linked list : ");

    for(int i = 1; i <= 5; i++){
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
    temp = head;
    while(temp != NULL){
        a[i] = temp -> data;
        i++;
        temp = temp -> link;
    }
    printf("linked list in reverse in reverse order: ");

    for(int j = i - 1; j >= 0; j--){
        printf("%d -> ",a[j]);
    }
}