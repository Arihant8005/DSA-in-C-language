//create a binary tree with a root node and two child nodes (left and right), then display all three node values.

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
    root->left = (struct node *)malloc(sizeof(struct node));
    root->right = (struct node *)malloc(sizeof(struct node));

    printf("Enter root node data: ");
    scanf("%d", &root->data);

    printf("Enter left child data: ");
    scanf("%d", &root->left->data);

    printf("Enter right child data: ");
    scanf("%d", &root->right->data);

    root->left->left = NULL;
    root->left->right = NULL;

    root->right->left = NULL;
    root->right->right = NULL;

    printf("\nRoot Node = %d\n", root->data);
    printf("Left Child = %d\n", root->left->data);
    printf("Right Child = %d\n", root->right->data);

    free(root->left);
    free(root->right);
    free(root);

    return 0;
}