#include<iostream>
#include<stack>
using namespace std;
int main(){
    stack<int>s;
    int n,a;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a;
        s.push(a);
    }
    stack<int>temp=s;
    while(!temp.empty()){
        cout<<temp.top()<<" ";
        temp.pop();
    }
    
    return 0;
}
