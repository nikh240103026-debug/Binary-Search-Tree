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

Node* successor(Node* root, Node* target){
    if (root == nullptr || target == nullptr)
        return nullptr;

    Node* successorNode = nullptr;
    Node* current = root;

    while (current != nullptr){
        if (target->data < current->data){
            successorNode = current;
            current = current->left;
        }
        else if (target->data > current->data){
            current = current->right;
        }
        else{
            if (current->right != nullptr){
                Node* temp = current->right;
                while (temp->left != nullptr){
                    temp = temp->left;
                }
                return temp;
            }

            break;
        }
    }

    return successorNode;
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

    cout<<"Successor of 50 in given BST is "<<successor(root, root->left)->data<<endl;

    return 0;
}