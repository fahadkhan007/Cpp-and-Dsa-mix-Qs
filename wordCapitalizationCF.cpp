#include<iostream>
#include<string>
using namespace std;
int main(){
    string a;
    cin>>a;
    for(int i=0;i<a.size();i++){
        if(i==0 && a[i]>='a' && a[i]<='z'){
            a[i]=a[i]-32;
        }
    }
    cout<<a;
    return 0;
}