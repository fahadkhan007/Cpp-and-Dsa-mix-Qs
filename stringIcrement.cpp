#include<iostream>
#include<string>
using namespace std;
int main(){
    string s;
    cin>>s;
    string d="";
    for(int i=0;i<s.size();i=2+i){
        d+=s[i];
    }
    return 0;
}
