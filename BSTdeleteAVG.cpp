#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int value) {
        data = value;
        left = nullptr;
        right = nullptr;
    }
};

Node* insert(Node* root, int data) {
    if (root == nullptr) {
        return new Node(data);
    }
    if (data < root->data) {
        root->left = insert(root->left, data);
    } else if (data > root->data) {
        root->right = insert(root->right, data);
    }
    return root;
}

int count(Node* root) {
    if (root == nullptr) {
        return 0;
    }
    return 1 + count(root->left) + count(root->right);
}

int sum(Node* root) {
    if (root == nullptr) {
        return 0;
    }
    return root->data + sum(root->left) + sum(root->right);
}

Node* minNode(Node* root) {
    while (root && root->left != nullptr) {
        root = root->left;
    }
    return root;
}

Node* deleteNode(Node* root, int data) {
    if (root == nullptr) {
        return nullptr;
    }
    if (root->data == data) {
        if (root->left == nullptr && root->right == nullptr) {
            delete root;
            return nullptr;
        }
        if (root->left == nullptr) {
            Node* temp = root->right;
            delete root;
            return temp;
        }
        if (root->right == nullptr) {
            Node* temp = root->left;
            delete root;
            return temp;
        }
        int mini = minNode(root->right)->data;
        root->data = mini;
        root->right = deleteNode(root->right, mini);
    } else if (root->data > data) {
        root->left = deleteNode(root->left, data);
    } else {
        root->right = deleteNode(root->right, data);
    }
    return root;
}

Node* deleteGreaterThanAvg(Node* root, int avg) {
    if (root == nullptr) {
        return nullptr;
    }
    root->left = deleteGreaterThanAvg(root->left, avg);
    root->right = deleteGreaterThanAvg(root->right, avg);
    if (root->data > avg) {
        return deleteNode(root, root->data);
    }
    return root;
}

void inOrder(Node* root) {
    if (root == nullptr) {
        return;
    }
    inOrder(root->left);
    cout << root->data << " ";
    inOrder(root->right);
}

int main() {
    Node* root = nullptr;
    int n, e;

    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> e;
        root = insert(root, e);
    }

    if (n > 0) {
        int avg = sum(root) / count(root);
        root = deleteGreaterThanAvg(root, avg);
    }

    inOrder(root);
    cout << endl;

    return 0;
}



// // You are using GCC
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
// node* bst(node* root,int data){
//     if(root==nullptr){
//         root=new node(data);
//         return root;
//     }
//     if(data<root->data){
//         root->left=bst(root->left,data);
//     }
//     if(data>root->data){
//         root->right=bst(root->right,data);
//     }
//     return root;
// }
// int count(node* root){
//     if(root==nullptr){
//         return 0;
//     }
//     int lc=count(root->left);
//     int rc=count(root->right);
//     return 1+lc+rc;
    
// }
// int sum(node* root){
//     if(root==nullptr){
//         return 0;
//     }
//     return root->data+sum(root->left)+sum(root->right);
// }
// node* minnode(node* root){
//     node* temp=root;
//     if(temp==nullptr){
//         return nullptr;
//     }
//     while(temp->left!=nullptr){
//         temp=temp->left;
//     }
//     return temp;
// }
// node* deletenode(node* root,int data){
//     if(root==nullptr){
//         return nullptr;
//     }
//     if(root->data==data){
//         if(root->left==nullptr && root->right==nullptr){
//             delete root;
//             return nullptr;
//         }
//         if(root->left!=nullptr && root->right==nullptr){
//             node* temp=root->left;
//             delete root;
//             return temp;
//         }else if(root->left==nullptr && root->right!=nullptr){
//             node* temp=root->right;
//             delete root;
//             return temp;
//         }
//         if(root->left!=nullptr && root->right!=nullptr){
//             int mini=minnode(root->right)->data;
//             root->data=mini;
//             root->right=deletenode(root->right,mini);
//             return root;
//         }
//     }else if(root->data>data){
//         root->left=deletenode(root->left,data);
//         return root;
//     }else{
//         root->right=deletenode(root->right,data);
//         return root;
//     }
// }
// node* deleteavg(node* root,int avg){
//     if(root==nullptr){
//         return nullptr;
//     }
//     root=deleteavg(root->right,avg);
//     root=deleteavg(root->left,avg);
//     if(root->data>avg){
//         root=deletenode(root,root->data);
        
//     }
//     return root;
// }
// void in(node* root){
//     if(root==nullptr){
//         return;
    
//     }
//     in(root->left);
//     cout<<root->data<<" ";
//     in(root->right);
// }
// int main(){
//     node* root=nullptr;
//     int n,e;
//     cin>>n;
//     for(int i=0;i<n;i++){
//         cin>>e;
//         root=bst(root,e);
//     }
//     int avg=sum(root)/count(root);
//     root=deleteavg(root,avg);
//     in(root);
    
    
    
// }






