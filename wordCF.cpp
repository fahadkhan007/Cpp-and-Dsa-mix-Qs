#include<iostream>
#include<string>
using namespace std;
int main(){
    string a;
    cin>>a;
    int u=0,l=0;
    for(int i=0;i<a.size();i++){
        if(a[i]>='a' && a[i]<='z'){
            l++;
        }else{
            u++;
        }
    }
    if(u>l){
        for(char &c : a){
            if(c>='a' && c<='z'){
                c=c-32;
                }
            }
    }else{
        for(char &c : a){
            if(c>='A' && c<='Z'){
                c=c+32;
            }
        }
    }  

    cout<<a;
    return 0;
}
