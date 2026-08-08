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

Node* lca(Node* root, Node* p, Node* q){
    if (root == nullptr)
        return nullptr;
    
    else if(p->data < root->data && q->data < root->data){
        return lca(root->left, p, q);
    }

    else if(p->data > root->data && q->data > root->data){
        return lca(root->right, p, q);
    }

    return root;
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

    cout<<"Lowest Common Ancester(LCA) of given roots is "<<lca(root, root->left->left, root->left->right)->data<<endl;
    
    return 0;
}