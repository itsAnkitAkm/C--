#include <iostream>
using namespace std;
const int MOD = 998244353;

int countArrays(int N, int K) {
    long long dp[N + 1];
    dp[1] = K;

    for (int i = 2; i <= N; i++) {
        dp[i] = (dp[i - 1] * K) % MOD;
    }

    long long ans = 1;
    for (int i = 1; i <= N; i++) {
        ans = (ans * dp[i]) % MOD;
    }

    return ans;
}

int main() {
    int N, K;
    cin >> N >> K;

    int result = countArrays(N, K);
    cout << result << endl;

    return 0;
}
