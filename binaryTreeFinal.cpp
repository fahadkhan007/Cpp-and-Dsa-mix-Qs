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
node* findmin(node* root){
    node* temp=root;
    if(temp== nullptr){
        return nullptr;
    }
    while(temp->left!=nullptr){
        temp=temp->left;
    }
    return temp;
}
node* deleteNode(node* root,int data){
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
        }
        if(root->left==nullptr && root->right!=nullptr){
            node* temp=root->right;
            delete root;
            return temp;
        }
        if(root->left!=nullptr && root->right!=nullptr){
            int mini=findmin(root->right)->data;
            root->data=mini;
            root->right=deleteNode(root->right,mini);
            return root;
        }
    }else if(data<root->data){
        root->left=deleteNode(root->left,data);
        return root;
    }else{
        root->right=deleteNode(root->right,data);
        return root;
    }
}
void in(node* root){
    if(root==nullptr){
        return;
    }
    in(root->left);
    cout<<root->data<<" ";
    in(root->right);
}
int sum(node* root){
    if(root==nullptr){
        return 0;
    }
    return root->data+sum(root->right)+sum(root->left);
}
node* deleteAvg(node* root,int avg){
    if(root==nullptr){
        return nullptr;
    }
    root->left=deleteAvg(root->left,avg);
    root->right=deleteAvg(root->right,avg);
    if(root->data>avg){
        return deleteNode(root,root->data);
    }
    return root;
}

int main(){
    node* root=nullptr;
    int n,e;
    cout<<"enter no. of node: ";
    cin>>n;
    for(int i=0;i<n;i++){
        cout<<"enter "<<i+1<<" data: ";
        cin>>e;
        root=bst(root,e);
    }
    int avg=sum(root)/n;
    root=deleteAvg(root,avg);
    in(root);

    
    return 0;
}






















// #include<iostream>
// using namespace std;
// class node{
//     public:
//     int data;
//     node* left;
//     node* right;
//     node(int value){
//         data=value;
//         left=nullptr;
//         right=nullptr;
//     }
// };
// node* bt(node* root){
//     int data;
//     cout<<"enter the data: ";
//     cin>>data;
//     root=new node(data);
//     if(data==-1){
//         return nullptr;
//     }
//     cout<<"for "<<data<<" left ";
//     root->left=bt(root->left);
//     cout<<"for "<<data<<" right ";
//     root->right=bt(root->right);
//     return root;

// }



// void pre(node* root){
//     if(root==nullptr){
//         return;
//     }
//     cout<<root->data<<" ";
//     pre(root->left);
//     pre(root->right);
// }
// int main(){
//     node* root=nullptr;
//     root=bt(root);
//     pre(root);
    
//     return 0;
// }