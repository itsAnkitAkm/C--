#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        unordered_map<char, int> m;

        for (auto i : s) {
            m[i]++;
        }

        int odd = 0; // Initialize odd to 0, not -1
        for (auto i : m) {
            if (i.second % 2 != 0) {
                odd++;
            }
        }

        if (odd>k+1) {
            cout << "NO" << endl;
        } else {
            cout << "YES" << endl;
        }
    }

    return 0;
}
