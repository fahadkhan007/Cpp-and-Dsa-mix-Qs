//enter -1 for null root
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
void levelorder(node* root){
    queue<node*>q;
    q.push(root);
    q.push(nullptr);
    while(!q.empty()){
        node* temp=q.front();
        q.pop();
        if(temp==nullptr){
            cout<<endl;
            if(!q.empty()){
                q.push(nullptr);
            }
        }else{
            cout<<temp->data<<" ";
            if(temp->left){
                q.push(temp->left);

            }
            if(temp->right){
                q.push(temp->right);
            }
        }
    }
}
int main(){
    node* root=nullptr;
    buildTreeLevelOrder(root);
    levelorder(root);
    return 0;
}