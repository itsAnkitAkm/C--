#include <iostream>
#include <vector>
using namespace std;

const int MOD = 998244353;

long long calculatePairs(int N, vector<int>& A, vector<int>& B, int M, vector<int>& C, vector<int>& D) {
    vector<int> factor_count_X(2 * 1000001, 0);
    vector<int> factor_count_Y(2 * 1000001, 0);

    for (int i = 0; i < N; i++) {
        factor_count_X[A[i]] = B[i];
    }
    for (int i = 0; i < M; i++) {
        factor_count_Y[C[i]] = D[i];
    }

    long long ans = 1;
    for (int i = 2; i <= 2 * 1000000; i++) {
        int p = factor_count_X[i];
        int q = factor_count_Y[i];

        if (p > q) {
            ans = (ans * (p + 1)) % MOD;
        } else if (p < q) {
            ans = (ans * (q + 1)) % MOD;
        }
    }

    return ans;
}

int main() {
    int N, M;
    cin >> N;
    vector<int> A(N), B(N);

    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }
    for (int i = 0; i < N; i++) {
        cin >> B[i];
    }

    cin >> M;
    vector<int> C(M), D(M);

    for (int i = 0; i < M; i++) {
        cin >> C[i];
    }
    for (int i = 0; i < M; i++) {
        cin >> D[i];
    }

    long long result = calculatePairs(N, A, B, M, C, D);
    cout << result << endl;

    return 0;
}
