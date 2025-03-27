// #include<iostream>
// #include<string>
// using namespace std;
// int main(){
//     string a;
//     cin>>a;
//     char arr[a.size()];
//     for(char c : a){
//         for(int i=0;i<a.size();i++){
//             if(arr[i]!=c){
//                 arr[i]=c;
//             }
//         }
//     }
//     for(char c : arr){
//         cout<<c;
//     }
    

// }
#include<iostream>
#include<string>
using namespace std;
int main(){
    string a;
    cin>>a;
    string b="";
    for(char c:a){
        for(char x:b){
            if(x!=c){
            b+=c;
            }else{
                continue;
            
        }
            }
    }
    cout<<b;

}