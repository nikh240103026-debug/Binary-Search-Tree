#include<iostream>
#include<climits>
using namespace std;

class Node{
    public:
        int data;
        Node* left;
        Node* right;

        Node(int value){
            data=value;
            left = nullptr;
            right = nullptr;
        }
};

void traversal(Node* root){
    if (root == nullptr)
        return;

    cout<<root->data<<" ";
    traversal(root->left);
    traversal(root->right);
}

Node* search(Node* root, int key){
    if(root == nullptr)
        return nullptr;

    if (root->data == key)
        return root;

    if (key < root -> data)
       return search(root->left, key);

    else
        return search(root->right, key);
}

bool validate(Node* root, int minValue, int maxValue){
    if (root == nullptr)
        return true;

    if (root->data <= minValue || root->data >= maxValue)
        return false;

    return validate(root->left, minValue, root->data) &&
           validate(root->right, root->data, maxValue);
}

int main(){
    Node* root = new Node(100);
    
    root -> left = new Node(50);
    root -> right = new Node(150);

    root -> left -> left = new Node(25);
    root -> left -> right = new Node(75);

    root -> right -> left = new Node(125);
    root -> right -> right = new Node(175);

    traversal(root);
    cout<<endl;

    cout<<search(root, 25)->data<<endl;

    return 0;
}



