#include <iostream>
using namespace std;

class TreeNode {
public:
    int data;
    TreeNode* left;
    TreeNode * right;

    TreeNode(int data){
        this->data = data;
        this->right = NULL;
        this->left = NULL;
    }
};

int maxInBinaryTree(TreeNode* root){
    if(root == NULL) return INT_MIN;
    int sum = root->data;
    int lsum = maxInBinaryTree(root->left);
    int rsum = maxInBinaryTree(root->right); 
    return lsum + rsum + sum;
}

int main(){
    TreeNode* NewRoot = NULL;
    TreeNode* root = new TreeNode(2);
    root->left = new TreeNode(7);
    root->right = new TreeNode(5);
    root->left->right = new TreeNode(6);
    root->right->right = new TreeNode(9);
    cout << maxInBinaryTree(root);
    return 0;
}