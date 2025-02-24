#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t; 
    
    while (t--) {
        long long b, c, d;
        cin >> b >> c >> d;
        
        
        long long a = (b ^ d);  
        if (((a | b) - (a & c)) == d) {
            cout << a << endl;  
        } else {
            cout << -1 << endl; 
        }
    }
    
    return 0;
}
