#include <iostream>
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

int maxDepth(Node* root){
    if(root == NULL) return 0;
    int left = maxDepth(root -> left);
    int right = maxDepth(root -> right);
    return max(left, right) + 1;
}

int main(){
    Node* root = NULL;
    root = buildTree(root);
    cout << maxDepth(root);
    return 0;
}