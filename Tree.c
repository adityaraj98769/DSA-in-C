#include <stdio.h>
#include <stdlib.h>

struct node{
    int item;
    struct node *left;
    struct node *right;
};
struct node *root;

struct node *createnode(int value){
    struct node *newnode = (struct node*) malloc(sizeof(struct node));
    newnode->item = value;
    newnode->left = NULL;
    newnode->right = NULL;
     return newnode;
}
   struct node *insertleft(struct node *root, int value){
       if(root->left == NULL){
            root->left = createnode(value); 
       }
     
       return root->left;
   }
     struct node *insertright(struct node *root, int value){
         if(root->right == NULL){
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
      
        int main(){
            root = createnode(10);
            insertleft(root,20);
            insertright(root,30);
            
             printf("In-order traversal: ");
    inorder(root);
    printf("\n");
            
            return 0;
            
            
        }
   
