#include <stdio.h>
#include <stdlib.h>

struct node {
    int item;
    struct node *left;
    struct node *right;
};

struct node *root;

struct node *createnode(int value) {
    struct node *newnode = (struct node*) malloc(sizeof(struct node));
    newnode->item = value;
    newnode->left = NULL;
    newnode->right = NULL;
    return newnode;
}

struct node *insertleft(struct node *root, int value) {
    if (root->left == NULL) {
        root->left = createnode(value);
    }
    return root->left;
}

struct node *insertright(struct node *root, int value) {
    if (root->right == NULL) {
        root->right = createnode(value);
    }
    return root->right;
}

void inorder(struct node *root) {
    if (root != NULL) {
        inorder(root->left);
        printf("%d ", root->item);
        inorder(root->right);
    }
}

int main() {
    int rootValue, leftValue, rightValue;

    printf("Enter the value for root node: ");
    scanf("%d", &rootValue);
    
    root = createnode(rootValue);
    
    printf("Enter the value for left child of root: ");
    scanf("%d", &leftValue);
    insertleft(root, leftValue);
    
    printf("Enter the value for right child of root: ");
    scanf("%d", &rightValue);
    insertright(root, rightValue);
    
    printf("In-order traversal: ");
    inorder(root);
    printf("\n");

    // Free the allocated memory (not shown here for simplicity)
    
    return 0;
}
