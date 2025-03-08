#include<iostream>
using namespace std;
int count=0;
int towerofhanoi(int n,char source,char auxiliary,char destination){
    if(n==1){
        cout<<"move disk 1 from "<<source<<" to "<<destination<<endl;
        return 1;
    }
    towerofhanoi(n-1,source,destination,auxiliary);
    cout<<"move disk "<<n<<" from "<<source<<" to "<<destination<<endl;
    count++;
    towerofhanoi(n-1,auxiliary,source,destination);
    count++;
    return count+1;
}
int main(){
    int n;
    cout<<"enter the number of disks: ";
    cin>>n;
    int t=towerofhanoi(n,'A','B','C');
    cout<<t;
    
    return 0;
}