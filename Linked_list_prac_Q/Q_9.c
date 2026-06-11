// find average of all elements in a linked list

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
    float average;
    temp = head;

    while (temp != NULL) {
        sum += temp->data;
        average = (float)(sum)/5;
        temp = temp->link;
    }

    printf("Sum of all elements = %d", sum);
    printf("Average = %.2f",average);

}