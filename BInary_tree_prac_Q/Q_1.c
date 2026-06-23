//Write a C program to:
// Create a binary tree node using a structure.
// Take one integer value from the user.
// Store the value in the root node.
// Display the value stored in the root node.

#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *left;
    struct node *right;
};

int main()
{
    struct node *root;

    root = (struct node *)malloc(sizeof(struct node));

    printf("Enter data for root node: ");
    scanf("%d", &root->data);

    root->left = NULL;
    root->right = NULL;

    printf("Root node data = %d\n", root->data);

    free(root);

    return 0;
}