

#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    
    vector<vector<int>> arr(n, vector<int>(3));
    
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> arr[i][j];
        }
    }
    
    int count = 0;
    
  
    for (int i = 0; i < n; i++) {
        int x = 0;
        for (int j = 0; j < 3; j++) {
            if (arr[i][j] == 1) {
                x++;
            }
        }
        if (x >= 2) {
            count++;
        }
    }
    
    cout << count << endl;

    return 0;
}
