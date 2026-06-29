//Delete a Node with Two Children

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

struct node *findMin(struct node *root)
{
    while(root->left!=NULL)
    {
        root=root->left;
    }

    return root;
}

struct node *deleteTwoChild(struct node *root,int key)
{
    if(root==NULL)
        return NULL;

    if(key<root->data)
        root->left=deleteTwoChild(root->left,key);

    else if(key>root->data)
        root->right=deleteTwoChild(root->right,key);

    else
    {
        struct node *temp=findMin(root->right);

        root->data=temp->data;

        root->right=deleteTwoChild(root->right,temp->data);
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

    root->right->left=createNode(60);
    root->right->right=createNode(80);

    printf("Before Deletion:\n");
    inorder(root);

    root=deleteTwoChild(root,50);

    printf("\nAfter Deletion:\n");
    inorder(root);

    return 0;
}