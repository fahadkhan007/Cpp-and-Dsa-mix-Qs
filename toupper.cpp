#include <bits/stdc++.h>
using namespace std;
class capital{
    public:
    void a(string name,int age,string name1){
     transform(name.begin(),name.end(),name.begin(),::toupper);
     transform(name1.begin(),name1.end(),name1.begin(),::toupper);
     cout<< name<<" ";
     cout<< age<<" ";
     cout<< name1;

    }
};
int main(){
    capital obj;
    string a,b;
    int c;
    cin>>a>>b;
    cin>>c;
    obj.a(a,c,b);
}