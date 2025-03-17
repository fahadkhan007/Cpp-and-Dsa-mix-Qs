#include<iostream>
#include<string>

using namespace std;
int main(){
    int n;
    cin>>n;
    string a[n];
for(int i=0;i<n;i++){
    cin>>a[i];
}
    
    for(int i=0;i<n;i++){
        int l=a[i].length();
        if(l>10){
            cout<<a[i].substr(0,1)<<l-2<<a[i].substr(l-1,1)<<endl;;
        }else{
            cout<<a[i]<<endl;
        }
    }



    
    return 0;
}