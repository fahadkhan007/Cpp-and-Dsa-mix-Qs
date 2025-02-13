//using public class
#include<iostream>
using namespace std;
class area{
    public:
    int r;
    double a(){
        return 3.14*r*r;
    }
};
int main(){
    int r;
    cin>>r;
    area obj;
    obj.r=r;
    double x= obj.a();
    cout<<x;

    return 0;
}


//using private class 
// #include<iostream>
// using namespace std;
// class area{
//     private:
//     int radius;
//     public:
//     double a(int r){
//         radius=r;
//         return 3.14*radius*radius;
//     }
// };
// int main(){
//     area obj;
//     int r;
//     cin>>r;
//     double x= obj.a(r);
//     cout<<x;

//     return 0;
// }
