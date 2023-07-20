#include<bits/stdc++.h>
using namespace std;

struct Node{
    struct Node* right;
    int data;
    struct Node* left;
};

//Creating a node
struct Node *newNode(int item)
{
    struct Node *temp = (struct Node *)malloc(sizeof(struct Node));
    temp->data = item;
    temp->left = temp->right = NULL;
    return temp;
};

//Inorder Traversal
void inorder(struct Node *root)
{
    if(root != NULL)
    {
        inorder(root->left);
        cout<<root->data << " -> ";
        inorder(root->right);
    }       
}

//Inserting a node
struct Node *insert(struct Node *node, int key)
{
    if(node == NULL)
        return newNode(key);
    if(key < node->data)
        node->left = insert(node->left, key);
    else
        node->right = insert(node->right, key);
    return node;
}

//Find the inorder successor
struct Node *minValue(struct Node *node)
{
    struct Node *current = node;
    while(current && current->left != NULL)
        current = current->left;
    return current;
}
