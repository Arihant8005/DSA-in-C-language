//Delete a Leaf Node from a Binary Search Tree

#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *left;
    struct node *right;
};

struct node *createNode(int data)
{
    struct node *newNode=(struct node*)malloc(sizeof(struct node));

    newNode->data=data;
    newNode->left=NULL;
    newNode->right=NULL;

    return newNode;
}

struct node *deleteLeaf(struct node *root,int key)
{
    if(root==NULL)
        return NULL;

    if(key<root->data)
        root->left=deleteLeaf(root->left,key);

    else if(key>root->data)
        root->right=deleteLeaf(root->right,key);

    else
    {
        free(root);
        return NULL;
    }

    return root;
}

void inorder(struct node *root)
{
    if(root!=NULL)
    {
        inorder(root->left);
        printf("%d ",root->data);
        inorder(root->right);
    }
}

int main()
{
    struct node *root=createNode(50);

    root->left=createNode(30);
    root->right=createNode(70);

    root->left->left=createNode(20);
    root->left->right=createNode(40);

    printf("Before Deletion:\n");
    inorder(root);

    root=deleteLeaf(root,20);

    printf("\nAfter Deletion:\n");
    inorder(root);

    return 0;
}