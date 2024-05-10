#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector<pair<int, int>> a(n);
        for(int i = 0; i < n; i++) {
            cin >> a[i].first;
            a[i].second = i;
        }
        sort(a.rbegin(), a.rend());
        vector<int> ans(n);
        long long sum = 0;
        for(int i = 0; i < n; i++) {
            sum += a[i].first;
            ans[a[i].second] = i + 1;
            if(i + 1 < n && sum < a[i + 1].first) {
                sum -= a[i].first;
                ans[a[i].second] = i;
            }
        }
        for(int i = 0; i < n; i++) {
            cout << ans[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}
