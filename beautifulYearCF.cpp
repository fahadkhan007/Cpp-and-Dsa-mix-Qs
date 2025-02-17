#include<iostream>
using namespace std;
bool isunique(int year){
    int count[10]={0};
    while(year>0){
        int digit=year%10;
        if(count[digit]>0){
            return false;

        }
            count[digit]++;
            year/=10;
    }
        return true;
}
int findnext(int y){
    y++;
    while(!isunique(y)){
        y++;
    }
    return y;
}
int main(){
    int n;
    cin>>n;
    int x=findnext(n);
    cout<<x;

    
    return 0;
}