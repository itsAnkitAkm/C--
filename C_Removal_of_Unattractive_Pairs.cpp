#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        string s;
        cin >> n >> s;

        stack<char> st;

        for (int i = 0; i < n; i++) {
            if (!st.empty() && s[i] == st.top()) {
                st.push(s[i]);
            } else {
               if(!st.empty()){
    st.pop();
               }
               else{
       st.push(s[i]);
               }
            }
        }

        int count = 0;
        while (!st.empty()) {
            st.pop();
            count++;
        }

        cout << count << endl;
    }

    return 0;
}
