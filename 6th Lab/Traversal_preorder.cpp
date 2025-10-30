#include <iostream>
using namespace std;

struct node {
    int data;
    node* left;
    node* right;
};

node* newnode(int value) {
    node* temp = new node;
    temp->data = value;
    temp->left = nullptr;
    temp->right = nullptr;
    return temp;
}


void preorder(node* root) {
    if (root == nullptr)
        return;

    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
}

int main() {

    node* root = newnode(22);
    root->left = newnode(31);
    root->right = newnode(7);
    root->left->left = newnode(56);
    root->left->right = newnode(19);

    cout << "Preorder Traversal: ";
    preorder(root);
    cout << endl;

    return 0;
}

