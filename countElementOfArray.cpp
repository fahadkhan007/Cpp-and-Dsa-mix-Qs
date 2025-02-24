#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
    for(int i=0;i<n;){
        int count=0;
        for(int j=i;j<n;j++){
            if(arr[i]==arr[j]){
            count++;
            }
        }
        cout<<arr[i]<<" "<<count<<endl;
        i+=count;

    }
    return 0;
}
