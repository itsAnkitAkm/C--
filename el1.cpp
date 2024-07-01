#include <iostream>
#include <vector>

using namespace std;

// Function to compute the binomial coefficient C(n, k)
long long binomialCoefficient(int n, int k) {
    if (k > n) return 0;
    if (k == 0 || k == n) return 1;
    long long res = 1;
    for (int i = 1; i <= k; ++i) {
        res = res * (n - i + 1) / i;
    }
    return res;
}

string findKthLexicographicalString(int N, int K) {
    int countOfOnes = 2;
    int countOfZeros = N - 2;
    string result = "";

    for (int i = 0; i < N; ++i) {
        if (countOfOnes == 0) {
            result += '0';
            continue;
        }
        if (countOfZeros == 0) {
            result += '1';
            continue;
        }

        // Count the number of valid strings starting with '0' at this position
        long long countWithZero = binomialCoefficient(countOfZeros + countOfOnes - 1, countOfOnes);

        if (K <= countWithZero) {
            result += '0';
            countOfZeros--;
        } else {
            result += '1';
            K -= countWithZero;
            countOfOnes--;
        }
    }
    
    return result;
}

int main() {
    int N, K;
    cin >> N >> K;

    string result = findKthLexicographicalString(N, K);
    cout << result << endl;

    return 0;
}
