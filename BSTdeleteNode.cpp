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
node* bst(node* root,int data){
    if(root==nullptr){
        root=new node(data);
        return root;
    }
    if(data<root->data){
        root->left=bst(root->left,data);
    }else{
        root->right=bst(root->right,data);
    }
    return root;
}
node* minnode(node* root){
    node* temp=root;
    while(temp->left!=nullptr){
        temp=temp->left;
    }
    return temp;
}
node* maxnode(node* root){
    node* temp=root;
    while(temp->right!=nullptr){
        temp=temp->right;
    }
    return temp;
}
node* deletenode(node* root,int data){
    if(root==nullptr){
        return nullptr;
    }
    if(root->data==data){
        if(root->left==nullptr && root->right==nullptr){
            delete root;
            return nullptr;
        }
        if(root->left!=nullptr && root->right==nullptr){
            node* temp=root->left;
            delete root;
            return temp;
        }else if(root->left==nullptr && root->right!=nullptr){
            node* temp=root->right;
            delete root;
            return temp;
        }
        if(root->left!=nullptr && root->right!=nullptr){
            int mini=minnode(root->right)->data;
            root->data=mini;
            root->right=deletenode(root->right,mini);
            return root;

        }
        
    }else if(root->data>data){
        root->left=deletenode(root->left,data);
        return root;
    }else{
        root->right=deletenode(root->right,data);
        return root;
    }
}
void print(node* root){
    if(root==nullptr){
        return;
    }
    cout<<root->data<<" ";
    print(root->left);
    print(root->right);
}
int main(){
    node* root=nullptr;
    int data=0;
    while(data!=-1){
        cout<<"enter data: ";
        cin>>data;
        if(data!=-1){
            root=bst(root,data);
        }
    }
    root=deletenode(root,10);
    print(root);

    return 0;
}