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
    }
    if(data>root->data){
        root->right=bst(root->right,data);
    }
    return root;
}
bool search(node* root,int data){
    if(root==nullptr){
        return false;
    }
    if(root->data==data){
        return true;
    }
    if(data<root->data){
        return search(root->left,data);
    }else{
        return search(root->right,data);
    }
    
}
int main(){
    node* root =nullptr;
    int data=0;
    while(data!=-1){
        cout<<"enter data: ";
        if(data!=-1){
            cin>>data;
            root=bst(root,data);
        }
    }
    cout<<"enter the data you want to search: ";
    int d;
    cin>>d;
    if(search(root,d)){
        cout<<"data found";
    }else{
        cout<<"data not found";
    }
    

    return 0;
}