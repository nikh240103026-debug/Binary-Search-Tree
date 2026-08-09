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

Node* predecessor(Node* root, Node* target){
    if (root == nullptr || target == nullptr)
        return nullptr;

    Node* predecessorNode = nullptr;
    Node* current = root;

    while (current != nullptr){
        if (target->data > current->data){
            predecessorNode = current;
            current = current->right;
        }
        else if (target->data < current->data){
            current = current->left;
        }
        else{
            if (current->left != nullptr){
                Node* temp = current->left;
                while (temp->right != nullptr){
                    temp = temp->right;
                }
                return temp;
            }
            break;
        }
    }

    return predecessorNode;
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

    cout<<"Predecessor of 50 in given BST is "<<predecessor(root, root->left)->data<<endl;

    return 0;
}