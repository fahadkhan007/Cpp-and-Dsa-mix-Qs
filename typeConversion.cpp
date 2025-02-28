#include<iostream>
using namespace std;
class time1{
    int hrs;
    public:
    time1(int t){
        hrs=t/60;
    }
    void show(){
        cout<<hrs;
    }
};
int main(){
    int a=85;
    time1 t1(a);
    t1.show();
    return 0;
}