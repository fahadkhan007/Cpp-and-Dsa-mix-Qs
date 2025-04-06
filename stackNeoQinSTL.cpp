#include<iostream>
#include<stack>
using namespace std;
int main(){
    stack<char>mystack;
    char a='0';
    while(a!='4'){
        cin>>a;
        if(a!='4'){
            if(a=='1'){
                cin>>a;
                cout<<"Typed character: "<<a<<endl;
                mystack.push(a);
            }else if(a=='2'){
                if(mystack.empty()){
                    cout<<"Text editor buffer is empty. Nothing to undo.";
                }
                else if(!mystack.empty()){
                cout<<"Undo: Removed character "<<mystack.top()<<endl;
                mystack.pop();
                }
            }else if(a=='3'){
                if(mystack.empty()){
                    cout<<"Text editor buffer is empty."<<endl;
                }
                else if(!mystack.empty()){
                    stack<char>temp=mystack;
                cout<<"Current text: ";
                while(!temp.empty()){
                    cout<<temp.top()<<" ";
                    temp.pop();
                }}
                cout<<endl;
            }else{
                cout<<"Invalid choice";
                
            }
        }
    }
    return 0;
}