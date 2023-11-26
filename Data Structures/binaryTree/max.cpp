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
    int res = root->data;
    int lres = maxInBinaryTree(root->left);
    int rres = maxInBinaryTree(root->right); 
    if(lres > res) res = lres;
    if(rres > res) res = rres;
    return res;
}

int main(){
    TreeNode* NewRoot = NULL;
    TreeNode* root = new TreeNode(2);
    root->left = new TreeNode(7);
    root->right = new TreeNode(5);
    root->left->right = new TreeNode(6);
    root->left->right->left = new TreeNode(1);
    root->left->right->right = new TreeNode(11);
    root->right->right = new TreeNode(9);
    root->right->right->left = new TreeNode(4);
    cout << maxInBinaryTree(root);

    return 0;
}