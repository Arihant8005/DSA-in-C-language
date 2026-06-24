//Write a C program to count the total number of nodes in a binary tree.

#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *left;
    struct node *right;
};

int countNodes(struct node *root)
{
    if(root == NULL)
    {
        return 0;
    }

    return 1 + countNodes(root->left) + countNodes(root->right);
}

int main()
{
    struct node *root;

    root = (struct node *)malloc(sizeof(struct node));
    root->data = 10;

    root->left = (struct node *)malloc(sizeof(struct node));
    root->left->data = 20;

    root->right = (struct node *)malloc(sizeof(struct node));
    root->right->data = 30;

    root->left->left = (struct node *)malloc(sizeof(struct node));
    root->left->left->data = 40;

    root->left->right = (struct node *)malloc(sizeof(struct node));
    root->left->right->data = 50;

    root->right->left = NULL;
    root->right->right = NULL;

    root->left->left->left = NULL;
    root->left->left->right = NULL;

    root->left->right->left = NULL;
    root->left->right->right = NULL;

    printf("Total number of nodes = %d\n", countNodes(root));

    return 0;
}