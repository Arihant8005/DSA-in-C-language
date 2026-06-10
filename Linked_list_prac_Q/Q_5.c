#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *link;
};

int main()
{
    struct Node *head = NULL;
    struct Node *temp = NULL;
    struct Node *newNode = NULL;

    int key;
    int found = 0;
    printf("Enter 5 elements: ");

    for(int i = 1; i <= 5; i++)
    {
        newNode = (struct Node *)malloc(sizeof(struct Node));

        scanf("%d", &newNode->data);

        newNode->link = NULL;

        if(head == NULL)
        {
            head = newNode;
            temp = head;
        }
        else
        {
            temp->link = newNode;
            temp = newNode;
        }
    }

    printf("Enter element to search: ");
    scanf("%d", &key);

    temp = head;

    while(temp != NULL)
    {
        if(temp->data == key)
        {
            found = 1;
            break;
        }

        temp = temp->link;
    }

    if(found == 1)
    {
        printf("Element found");
    }
    else
    {
        printf("Element not found");
    }
}