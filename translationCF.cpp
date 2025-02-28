#include<iostream>
#include<string>
using namespace std;
int main(){
    string a,b;
    cin>>a;
    cin>>b;
    string x="";
    for(int i=a.length()-1;i>=0;i--){
        x+=a[i];

    }
    
    if(b==x){
        cout<<"YES";
    }else{
        cout<<"NO";
    }

    return 0;
}