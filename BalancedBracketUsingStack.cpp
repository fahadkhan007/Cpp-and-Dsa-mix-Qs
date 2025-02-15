#include <iostream>
#include <stack>
#include <string>
using namespace std;

bool isBalanced(string s) {
    stack<char> st;
    
    for (char c : s) {
        if (c == '(' || c == '{' || c == '[') {
            st.push(c);  
        } 
        else if (c == ')' || c == '}' || c == ']') {
            if (st.empty()) return false;  
            char top = st.top();
            
            
            if ((c == ')' && top == '(') || 
                (c == '}' && top == '{') || 
                (c == ']' && top == '[')) {
                st.pop();  
            } else {
                return false;  
            }
        }
    }
    
    return st.empty();  
}

int main() {
    string s;
    cin >> s;
    
    if (isBalanced(s)) {
        cout << "String is balanced" << endl;
    } else {
        cout << "Not balanced" << endl;
    }
    
    return 0;
}
