// Author: Ankit Mishra

#include <bits/stdc++.h>
using namespace std;

// Shortcuts for common data types
typedef long long ll;
typedef pair<int, int> pii;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef vector<pii> vpii;

// Constants
const int MOD = 1e9 + 7;
const int INF = 1e9;
const ll LINF = 1e18;

// Fast IO
#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0)

// Macros for convenience
#define all(x) (x).begin(), (x).end()
#define pb push_back
#define mp make_pair
#define fi first
#define se second
#define endl '\n'

// Debugging macros
#ifdef LOCAL
    #define debug(x) cerr << #x << " = " << x << endl
#else
    #define debug(x)
#endif

// Function templates
template<typename T> void print_vector(const vector<T>& v) {
    for (const T& x : v) cout << x << ' ';
    cout << endl;
}

void solve(ll n, vector<unsigned long long>& v, set<ll>& s, unsigned long long K) {
    for (auto& i : v) {
        s.insert(i % K);
    }

    if (s.size() == 2) {
        cout << K << endl;
    } else {
        s.clear();
        if (K <= LINF / 2) {
            solve(n, v, s, K * 2);
        }
    }
}

int main() {
    FAST_IO;

    int t;
    cin >> t;
    while (t--) {
        ll n;
        cin >> n;

        vector<unsigned long long> v(n);

        for (auto& i : v) {
            cin >> i;
        }
        set<ll> s;

        solve(n, v, s, 2);
    }

    return 0;
}
