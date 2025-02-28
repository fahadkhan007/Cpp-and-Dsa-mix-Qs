#include<iostream>
using namespace std;
int main(){
    int n,h;
    cin>>n>>h;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int x=0;
    for(int i=0;i<n;i++){
        if(a[i]<=h){
            x++;

        }else{
            x+=2;
        }
    }
    cout<<x;
    return 0;
}