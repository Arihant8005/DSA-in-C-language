//insert a node at a specific position

#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *link;
};

int main() {

    struct node *head = NULL;
    struct node *temp = NULL;
    struct node *new_node = NULL;

    int n;
    int pos;

    printf("Enter number of nodes: ");
    scanf("%d", &n);

    printf("Enter data: ");

    // Create linked list
    for(int i = 0; i < n; i++) {

        new_node = (struct node *)malloc(sizeof(struct node));

        scanf("%d", &new_node->data);

        new_node->link = NULL;

        if(head == NULL) {
            head = new_node;
            temp = head;
        }
        else {
            temp->link = new_node;
            temp = new_node;
        }
    }

    new_node = (struct node *)malloc(sizeof(struct node));

    printf("Enter data of inserted node: ");
    scanf("%d", &new_node->data);

    printf("Enter position of inserted node: ");
    scanf("%d",&pos);

    if(pos == 1){
        new_node -> link = head;
        head = new_node;
    }
    else{
        temp = head;
        for(int j = 1; j < pos - 1; j++){
            temp = temp -> link;
        }
        new_node -> link = temp -> link;
        temp -> link = new_node;

    }

    // Display linked list
    temp = head;

    printf("Linked List: ");

    while(temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->link;
    }

    printf("NULL");

    return 0;
}