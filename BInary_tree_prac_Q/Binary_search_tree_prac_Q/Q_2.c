//Write a C program to search for a given element in a Binary Search Tree (BST).

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

    if(key < root->data)
    {
        return search(root->left, key);
    }
    else
    {
        return search(root->right, key);
    }
}

int main()
{
    struct node *root = NULL;
    int key;

    root = insert(root, 50);
    insert(root, 30);
    insert(root, 70);
    insert(root, 20);
    insert(root, 40);

    printf("Enter value to search: ");
    scanf("%d", &key);

    if(search(root, key))
    {
        printf("Element Found\n");
    }
    else
    {
        printf("Element Not Found\n");
    }

    return 0;
}