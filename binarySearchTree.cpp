#include<iostream>
#include<queue>
using namespace std;
class node{
    public:
    int data;
    node* left;
    node*  right;
    node(int val){
        data=val;
        left=nullptr;
        right=nullptr;
    }
};
node* bst(node* root,int d){
    if(root==nullptr){
        root=new node(d);
        return root;
    }
    if(d<root->data){
        root->left=bst(root->left,d);
    }else if(d>root->data){
        root->right=bst(root->right,d);
    }
    return root;

}
void print(node* root){
    if(root==nullptr){
        return;
    }
    print(root->left);
    cout<<root->data<<" ";
    print(root->right);
}
void level(node* root){
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
    
    cout<<"Tell the number of node you want to insert in the bst: ";
    int n,x;
    cin>>n;
    while(n--){
        cout<<"enter node's value: ";
        cin>>x;
        root=bst(root,x);
        
    }
    level(root);

    
}