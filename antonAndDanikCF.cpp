#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    char s[n];
    for(int i=0;i<n;i++){
        cin>>s[i];
    }
    int a=0,d=0;
    for(char c : s){
        if(c=='A'){
            a++;
        }else if(c=='D'){
            d++;
        }
    }
    if(a>d){
        cout<<"Anton";
    }else if(d>a){
        cout<<"Danik";
    }else if(a==d){
        cout<<"Friendship";
    }
    return 0;
}