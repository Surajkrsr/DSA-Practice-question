
#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;
};

Node* newNode(int value) {
    Node* temp = new Node();

    temp->data = value;
    temp->left = nullptr;
    temp->right = nullptr;

    return temp;
}

Node* createTree() {
    int value;

    cout << "Enter data (-1 for no node): ";
    cin >> value;

    if (value == -1) {
        return nullptr;
    }

    Node* root = newNode(value);

    cout << "Enter left child of " << value << endl;
    root->left = createTree();

    cout << "Enter right child of " << value << endl;
    root->right = createTree();

    return root;
}


void inorder(Node* root) {
    if (root == nullptr) {
        return;
    }

    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

int main() {
    cout << "Create the binary tree:\n";

    Node* root = createTree();

    cout << "\nInorder Traversal: ";
    inorder(root);

    cout << endl;
    return 0;
}

