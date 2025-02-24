#include<iostream>
#include<queue>
using namespace std;
class node{
    public:
    int data;
    node* left;
    node* right;
    node(int d){
        data=d;
        left=nullptr;
        right=nullptr;
    }

};
node* buildTree(node* root){
    cout<<"enter data: ";
    int data;
    cin>>data;
    root=new node(data);
    if(data==-1){
        return nullptr;
    }
    cout<<"for left of "<<data<<" ";
    root->left=buildTree(root->left);
    cout<<"for right of "<<data<<" ";
    root->right=buildTree(root->right);
    return root;
}

void buildTreeLevelOrder(node* &root){
    queue<node*>q;
    cout<<"enter data: ";
    int data;
    cin>>data;
    root=new node(data);
    q.push(root);
    while(!q.empty()){
        node* temp=q.front();
        q.pop();
        cout<<"enter left data for "<<temp->data<<":";
        int leftdata;
        cin>>leftdata;
        if(leftdata!=-1){
        temp->left=new node(leftdata);
        q.push(temp->left);
        }
        cout<<"enter right data for "<<temp->data<<":";
        int rdata;
        cin>>rdata;
        if(rdata!=-1){
        temp->right=new node(rdata);
        q.push(temp->right);
        }
    }
}

int count(node* root){
    
    if(root==nullptr){
        return 0;
    }
    int lc=count(root->left);
    int rc=count(root->right);
    return 1+lc+rc;
    

}
int main(){
    node* root=nullptr;
    buildTreeLevelOrder(root);
    int c=count(root);
    cout<<c;
    

}