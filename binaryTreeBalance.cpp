#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node* left;
    node* right;
    node(int value){
        data=value;
        left=nullptr;
        right=nullptr;
    }
};
node* buildTree(node* root){
    cout<<"enter data: ";
    int data;
    cin>>data;
    root = new node(data);
    if(data==-1){
        return nullptr;
    }
    cout<<"for left of "<<root->data<<" ";
    root->left=buildTree(root->left);
    cout<<"for right of "<<root->data<<" ";
    root->right=buildTree(root->right);
    return root;
}
int height(node* root){
    if(root==nullptr){
        return 0;
    }
    int lh=height(root->left);
    int rh=height(root->right);
    return 1+max(lh,rh);
}
bool isbalanced(node* root){
    if(root==nullptr){
        return true;
    }
    int lh=height(root->left);
    int rh=height(root->right);
    if(abs(lh-rh)>1){
        return false;
    }
    return isbalanced(root->left) && isbalanced(root->right);
}
int main(){
    node* root=nullptr;
    root=buildTree(root);
    bool x=isbalanced(root);
    if(x){
        cout<<"this tree is balanced";
    }else{
        cout<<"not balanced";
    }
    
    return 0;
}