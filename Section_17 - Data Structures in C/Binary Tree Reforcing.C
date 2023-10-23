#include <stdio.h>
#include <stdlib.h>

struct node {
    int item;
    struct node* left;
    struct node* right;
};

void In_Order_Transversal(struct node* root) {
    if (root == NULL) return;

    In_Order_Transversal(root->left); // transverse the left item
    printf("%d->", root->item); // transverse the center item
    In_Order_Transversal(root->right); // transverse the right item
}

void Pre_Order_Transversal(struct node* root) {
    if (root == NULL) return;
    printf("%d->", root->item); // transverse the center item
    Pre_Order_Transversal(root->left);
    Pre_Order_Transversal(root->right);
}

void Post_Order_Transversal(struct node* root) {
    if (root == NULL) return;
    Post_Order_Transversal(root->left);
    Post_Order_Transversal(root->right);
    printf("%d->", root->item); // transverse the center item
}

// Create a new Node
struct node* Create_Node(int value) {
    struct node* newNode = (struct node*)malloc(sizeof(struct node));
    newNode->item = value;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}

// Insert on the left of the node
struct node* Insert_Left(struct node* root, int value) {
    root->left = Create_Node(value);
    return root->left;
}

// Insert on the right of the node
struct node* Insert_Right(struct node* root, int value) {
    root->right = Create_Node(value);
    return root->right;
}

int main() {
    struct node* root = Create_Node(1);
    Insert_Left(root, 2);
    Insert_Right(root, 3);
    Insert_Left(root->left, 4);

    printf("In-order traversal\n");
    In_Order_Transversal(root);

    printf("\nPre-order traversal\n");
    Pre_Order_Transversal(root);

    printf("\nPost-order traversal\n");
    Post_Order_Transversal(root);

    return 0; // You should return an integer from the main function.
}
