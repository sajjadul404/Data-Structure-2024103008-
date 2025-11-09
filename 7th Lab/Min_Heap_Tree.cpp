#include <bits/stdc++.h>
using namespace std;

struct node {
    int data;
    struct node* left;
    struct node* right;
};

struct node* newnode(int idata) {
    struct node* N = new struct node;
    N->data = idata;
    N->left = NULL;
    N->right = NULL;
    return N;
}

void swapData(struct node* a, struct node* b) {
    int temp = a->data;
    a->data = b->data;
    b->data = temp;
}

void heapify(struct node* root) {
    if (root == NULL) return;

    struct node* smallest = root;

    if (root->left && root->left->data < smallest->data)
        smallest = root->left;
    if (root->right && root->right->data < smallest->data)
        smallest = root->right;

    if (smallest != root) {
        swapData(root, smallest);
        heapify(smallest);
    }
}

struct node* buildHeap() {
    struct node* root = newnode(10);
    root->left = newnode(12);
    root->right = newnode(1);
    root->left->left = newnode(15);
    root->left->right = newnode(8);

    heapify(root->left);
    heapify(root->right);
    heapify(root);

    return root;
}

void printTree(struct node* root, int space = 0, int height = 10) {
    if (root == NULL) return;
    space += height;
    printTree(root->right, space);
    cout << endl;
    for (int i = height; i < space; i++) cout << " ";
    cout << root->data << "\n";
    printTree(root->left, space);
}

int main() {
    struct node* root = buildHeap();

    cout << "Min Heap (Pointer-based):\n";
    printTree(root);

    return 0;
}
