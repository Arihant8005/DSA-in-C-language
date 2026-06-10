// create a linked list where user enter 5 numbers and display them
#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
};

int main() {
    struct Node *head = NULL;
    struct Node *temp = NULL;
    struct Node *newNode = NULL;

    printf("Enter 5 numbers:\n");

    for (int i = 1; i <= 5; i++) {

        // Create a new node
        newNode = (struct Node *)malloc(sizeof(struct Node));

        // Take input from user
        scanf("%d", &newNode->data);

        // Last node points to NULL
        newNode->next = NULL;

        // First node
        if (head == NULL) {
            head = newNode;
            temp = head;
        }
        // Remaining nodes
        else {
            temp->next = newNode;
            temp = newNode;
        }
    }

    // Display the linked list
    printf("\nLinked List: ");

    temp = head;

    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }

    printf("NULL");

    return 0;
}