#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    vector<double> a(2*n);
    for(int i=0; i<2*n; i++) cin >> a[i];

    vector<vector<double>> dp(n+1, vector<double>(n+1, 1e9));
    dp[0][0] = 0;
    sort(a.begin(), a.end());

    for(int i=0; i<2*n; i++) {
        for(int j=0; j<=i && j<=n; j++) {
            if(i-j <= n) {
                dp[j][i-j+1] = min(dp[j][i-j+1], dp[j][i-j] + abs(a[i]-(i-j)));
                if(j+1 <= n) dp[j+1][i-j] = min(dp[j+1][i-j], dp[j][i-j] + abs(a[i]-(j+1)));
            }
        }
    }

    cout << fixed << setprecision(3) << dp[n][n] << "\n";
    return 0;
}
