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
node* buildtree(node* root){
    int data;
    cout<<"enter the data: ";
    cin>>data;
    root=new node(data);
    if(data==-1){
        return nullptr;
    }
    cout<<"entr the data for the left child of "<<data<<":"<<endl;
    root->left=buildtree(root->left);
    cout<<"entr the data for the right child of "<<data<<":"<<endl;
    root->right=buildtree(root->right);
    return root;
}
void print(node* root){
    if(root==nullptr){
        return;
    }
    cout<<root->data<<" ";
    print(root->left);
    print(root->right);
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
    node* root = nullptr;
    root=buildtree(root);
    levelorder(root);
}