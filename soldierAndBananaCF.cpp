#include<iostream>
using namespace std;
int main(){
    int k,n,w;
    cin>>k>>n>>w;
    int spend=0;
    for(int i=1;i<=w;i++){
        spend += i*k;
    }
    if(spend>n){
        cout<<spend-n;
    }else{
        cout<<0;
    }
    return 0;
}