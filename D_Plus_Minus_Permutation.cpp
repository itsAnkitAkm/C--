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

void solve() {

           ll n, x, y;
        cin >> n >> x >> y;

        // ll i=1, j=n;

        // ll maxi = 0, mini = 0;

        // Calculate the maximum value
        // for (ll id = x; id <= n; id += x) {
        //     if (id % y != 0) {
        //         maxi += j;
        //         j--;
        //     }
        // }

        // // Calculate the minimum value
        // for (ll id = y; id <= n; id += y) {
        //     if (id % x != 0) {
        //         mini += i;
        //         i++;
        //     }
        // }

        ll l = n/x;
        ll r = n/y;

        ll lcm = (x*y)/__gcd(x,y);

        ll com= n/lcm;

        

        ll total = (n*(n+1)/2);

        ll maxi = total - (((n-(l-com))*(n-(l-com)+1))/2);
        ll mini = (((r-com)*(r-com+1))/2);
        

        ll ans = maxi - mini;
        cout << ans << endl;

}

int main() {
    FAST_IO;

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}
