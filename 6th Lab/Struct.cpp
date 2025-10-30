#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;
};  

Node* newNode(int idata) {
    Node* node = new Node;
    node->data = idata;
    node->left = NULL;
    node->right = NULL;
    return node;
}

int main() {
    Node* root = newNode(10);
    root->left = newNode(12);
    root->right = newNode(1);

    root->left->left = newNode(15);
    root->right->right = newNode(5);

    cout << root->data << endl;

    return 0;
}