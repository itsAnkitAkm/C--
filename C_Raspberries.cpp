#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<int> v(0,n);
        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }

        int idx = INT_MAX;
        int p = 1;
        int on = 0;
        for (auto i : v) {
            p *= i;
            if (i == 1) on++;
        }
        if (p % k == 0) {
            cout << 0 << endl;
        } else if (on > 0) {
            int mt = INT_MAX;
            for (int i = 1; i <= on; i++) {
                int p1 = p * (1 << i); // Use left shift for 2^i
                if (p1 % k == 0) {
                    mt = i;
                    break;
                }
            }
            if (mt != INT_MAX) {
                cout << mt << endl;
            } else {
                cout << -1 << endl; // No solution found
            }
        } else {
            for (auto i : v) {
                if (i <= k) {
                    if (k - i < idx) {
                        idx = k - i;
                    }
                } else {
                    if (k - (i % k) < idx) {
                        if (k - (i % k) == k) idx = 0;
                        else idx = k - (i % k);
                    }
                }
            }
            cout << idx << endl;
        }
    }
    return 0;
}
