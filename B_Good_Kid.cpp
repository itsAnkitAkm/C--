#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> arr(n);

        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        sort(arr.begin(), arr.end());

        
        arr[0] = arr[0] + 1;

        long long ans = 1;
        for (auto i : arr) {
            ans = ans * i;
        }
        cout << ans << endl;
    }
    return 0;
}
