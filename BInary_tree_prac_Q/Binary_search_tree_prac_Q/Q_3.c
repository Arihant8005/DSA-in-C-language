//Write a C program to find the minimum element in a Binary Search Tree (BST).

#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *left;
    struct node *right;
};

struct node* createNode(int data)
{
    struct node *newNode;

    newNode = (struct node *)malloc(sizeof(struct node));

    newNode->data = data;
    newNode->left = NULL;
    newNode->right = NULL;

    return newNode;
}

struct node* insert(struct node *root, int data)
{
    if(root == NULL)
    {
        return createNode(data);
    }

    if(data < root->data)
    {
        root->left = insert(root->left, data);
    }
    else if(data > root->data)
    {
        root->right = insert(root->right, data);
    }

    return root;
}

int findMin(struct node *root)
{
    if(root == NULL)
    {
        return -1;
    }

    while(root->left != NULL)
    {
        root = root->left;
    }

    return root->data;
}

int main()
{
    struct node *root = NULL;

    root = insert(root, 50);
    insert(root, 30);
    insert(root, 70);
    insert(root, 20);
    insert(root, 40);

    printf("Minimum element = %d\n", findMin(root));

    return 0;
}