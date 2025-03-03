#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n][2];
    for(int i=0;i<n;i++){
        for(int j=0;j<2;j++){
            cin>>arr[i][j];
        }
    }
    int t[n];
    int temp=0;
    for(int i=0;i<n;i++){
       
        t[i]=-arr[i][0]+arr[i][1]+temp;
        temp=t[i];
        
    }
    int max=t[0];
    for(int i=0;i<n;i++){
        if(t[i]>max){
            max=t[i];
        }
    }
    cout<<max;
    return 0;
}