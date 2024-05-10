#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int t;
    cin >> t;

    vector<long long> ans;
    while (n--) {
        int q;
        cin >> q;
        if (q == 1) {
            int x, y;
            cin >> x >> y;

            long long sum = pow(x,2) + pow(y,2);
            ans.push_back(sum);
            sort(ans.begin(), ans.end());
        } else {
            cout << ans[t-1] << endl;
        }
    }

    return 0;
}
