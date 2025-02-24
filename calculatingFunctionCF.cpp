#include <iostream>
using namespace std;

int main() {
    long long n; // Use long long to handle large values of n
    cin >> n;

    if (n % 2 == 0) {
        // For even n
        cout << n / 2;
    } else {
        // For odd n
        cout << -(n / 2 + 1);
    }

    return 0;
}
