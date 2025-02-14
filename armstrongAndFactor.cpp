// You are using GCC
#include<iostream>
#include<cmath>
using namespace std;
inline void factor(int  n){
    for(int i=1;i<=n;i++){
        if(n%i==0){
            cout<<i<<" ";
        }
    }
    
}
int countd(int n){
    int count=0;
    while(n!=0){
        n/=10;
        count++;
    }
    return count;
}
inline bool isarmstrong(int n){
    int og=n,sum=0;
    int c=countd(n);
    while(n!=0){
    int ld=n%10;
        sum += pow(ld,c);
        n /= 10;
    }
    if(sum!=og){
        return false;
    }else{
        return true;
    }
    
    
}
int main(){
    int n;
    cin>>n;
    if(isarmstrong(n)){
        cout<<n<<" is an armstrong number";
    }else{
        cout<<n<<" is not an armstrong number"<<endl;
        factor(n);
    }
    return 0;
}