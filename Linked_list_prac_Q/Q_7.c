// finding minimum and maximum in a single code of linked list

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

    printf("Enter 6 elements of linked list:\n");

    for (int i = 0; i <= 5; i++) {
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

    int max = head->data;
    int min = head->data;

    temp = head;

    while (temp != NULL) {

        if (temp->data > max) {
            max = temp->data;
        }

        if (temp->data < min) {
            min = temp->data;
        }

        temp = temp->link;
    }

    printf("Maximum element = %d\n", max);
    printf("Minimum element = %d", min);
}