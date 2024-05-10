#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        int arr[n], arr2[m];
        unordered_map<int, int> mapp;
        
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
            mapp[arr[i]]++;
        }
        
        int maxi = INT_MIN;
        int orr = -1; // Initialize orr to a default value
        
        for (int i = 0; i < m; i++) {
            cin >> arr2[i];
            if (mapp.find(arr2[i]) != mapp.end()) {
                if (mapp[arr2[i]] > maxi) {
                    maxi = mapp[arr2[i]];
                    orr = arr2[i]; // Update orr only if a better candidate is found
                }
            }
        }
        
        int XOR = 0, NOR = 0;
        
        for (int i = 0; i < n; i++) {
            XOR ^= (arr[i] | orr);
            NOR ^= arr[i];
        }
        
        if (NOR > XOR) {
            cout << XOR << " " << NOR << endl;
        } else {
            cout << NOR << " " << XOR << endl;
        }
    }
    
    return 0;
}
