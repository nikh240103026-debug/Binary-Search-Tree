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

Node* insert(Node* root, int key){
    if (root == nullptr)
        return new Node(key);

    if (key < root->data)
        root->left = insert(root->left, key);
    else if (key > root->data)
        root->right = insert(root->right, key);

    return root;
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

Node* Delete(Node* root, int key){
    if(root == nullptr)
        return nullptr;

    if(key < root->data)
        root->left = Delete(root->left, key);
    else if(key > root->data)
        root->right = Delete(root->right, key);
    else{
        if(root->left == nullptr){
            Node* temp = root->right;
            delete root;
            return temp;
        }

        else if(root->right == nullptr){
            Node* temp = root->left;
            delete root;
            return temp;
        }

        Node* temp = min(root->right);
        root->data = temp->data;
        root->right = Delete(root->right, temp->data);
    }

    return root;
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

    root = insert(root, 130);

    traversal(root);
    cout<<endl;

    Delete(root, 130);

    traversal(root);
    cout<<endl;

    cout<<search(root, 25)->data<<endl;

    cout<<"Smallest value in tree: "<<min(root)->data<<endl;
    cout<<"Biggest value in tree: "<<max(root)->data<<endl;
    cout<<"BST is valid: "<<boolalpha<<validate(root, INT_MIN, INT_MAX)<<endl;

    return 0;
}



