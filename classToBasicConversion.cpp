#include<iostream>
using namespace std;
class student{
    private:
    int rollNo;
    float fees;
    public:
    student(int a,float m){
        rollNo=a;
        fees=m;

    }
    operator int(){
        return rollNo;
    }
    
    operator float(){
        return fees;
    }
};
int main(){
    int j;
    float f;
    student st(5,4200.50);
    j=st;
    f=st;
    cout<<j<<endl;
    cout<<f<<endl;
    return 0;
}

