//Count the Total Number of Nodes in a BST

#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *left;
    struct node *right;
};

struct node *createNode(int data)
{
    struct node *newNode;

    newNode = (struct node *)malloc(sizeof(struct node));

    newNode->data = data;
    newNode->left = NULL;
    newNode->right = NULL;

    return newNode;
}

struct node *insert(struct node *root, int data)
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
    struct node *root = NULL;

    root = insert(root, 50);
    insert(root, 30);
    insert(root, 70);
    insert(root, 20);
    insert(root, 40);
    insert(root, 60);
    insert(root, 80);

    printf("Total number of nodes = %d\n", countNodes(root));

    return 0;
}