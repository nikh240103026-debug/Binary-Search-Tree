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

Node* min(Node* root){
    if(root == nullptr)
        return root;
    
    if (root -> left == nullptr)
        return root;

    return min(root->left);
}

Node* max(Node* root){
    if (root == nullptr)
        return root;

    if (root->right == nullptr)
        return root;

    return max(root->right);
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

    cout<<"Smallest value in tree: "<<min(root)->data<<endl;
    cout<<"Biggest value in tree: "<<max(root)->data<<endl;

    return 0;
}