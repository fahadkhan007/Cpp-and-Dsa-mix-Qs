#include<iostream>
#include<string>
using namespace std;
int main(){
    string s;
    cin>>s;
    bool seen[26]={false};
    int count=0;
    for(char c : s){
        int index=c-'a';
        if(!seen[index]){
            seen[index]=true;
            count++;
        }
    }
    if(count%2!=0){
        cout<<"IGNORE HIM!";
    }else{
        cout<<"CHAT WITH HER!";
    }

    return 0;
}


//my logic, little bit wrong 
// #include<iostream>
// #include<string>
// using namespace std;
// int main(){
//     string a;
//     cin>>a;
//     int count=0;
//     for(int i=0;i<a.size();i++){
//         int flag=0;
//         for(int j=i;j<a.size();j++){
//             if(a[i]==a[j] && i!=j){
//                 flag++;
//             }
//         }
//         count++;
//         if(flag!=0){
//             count -= flag;
//         }
//     }
//     if(count%2!=0){
//         cout<<"IGNORE HIM!";
//     }else{
//         cout<<"CHAT WITH HER!";
//     }
    
//     return 0;
// }