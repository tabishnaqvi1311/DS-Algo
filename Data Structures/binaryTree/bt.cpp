#include <iostream>
#include <queue>
using namespace std;
class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int val){
        this->data = val;
        this->left = NULL;
        this->right = NULL;
    }
};
Node* buildTree(Node* root){
    int data;
    cin >> data;
    root = new Node(data);

    if(data == -1) return NULL;

    cout << "left?: " << endl;
    root -> left =  buildTree(root -> left);
    cout << "right?" << endl;
    root -> right = buildTree(root -> right);
    return root;
}

void inorder(Node* root){
    if(root == NULL) return;

    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}
void preorder(Node* root){
    if(root == NULL) return;

    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
}
void postorder(Node* root){
    if(root == NULL) return;

    postorder(root->left);
    postorder(root->right);
    cout << root->data << " "; 
}
int main(){
    Node* root = NULL;
    root = buildTree(root);
    cout << "inorder: ";
    inorder(root);
    cout << "preorder:";
    preorder(root);
    cout << "postOrder";
    postorder(root);
    return 0;
}