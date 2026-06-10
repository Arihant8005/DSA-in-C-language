// find sum of all elements in a linked list

// Find the Maximum Element in a Linked List

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

    printf("Enter 5 elements of linked list:\n");

    // Create Linked List
    for (int i = 1; i <= 5; i++) {

        new_node = (struct node *)malloc(sizeof(struct node));

        scanf("%d", &new_node->data);

        new_node->link = NULL;

        if (head == NULL) {
            head = new_node;
            temp = head;
        }
        else {
            temp->link = new_node;
            temp = new_node;
        }
    }

    int sum = 0;
    temp = head;

    while (temp != NULL) {
        sum += temp->data;
        temp = temp->link;
    }

    printf("Sum of all elements = %d", sum);

}