//Write a C program to search for a given value in a binary tree and display whether the value is found or not.

#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *left;
    struct node *right;
};

int search(struct node *root, int key)
{
    if(root == NULL)
    {
        return 0;
    }

    if(root->data == key)
    {
        return 1;
    }

    return search(root->left, key) ||
           search(root->right, key);
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

    int key;

    printf("Enter value to search: ");
    scanf("%d", &key);

    if(search(root, key))
    {
        printf("Value Found\n");
    }
    else
    {
        printf("Value Not Found\n");
    }

    return 0;
}