#include <bits/stdc++.h>
using namespace std;

const int n = 10000000; // Declare 'n' as a constant

bool sieve[n + 1];

int main() {
    for (int i = 2; i <= n; i++) {
        sieve[i] = true;
    }

    for (int i = 2; i * i <= n; i++) {
        if (sieve[i]) {
            for (int j = i * i; j <= n; j += i) {
                sieve[j] = false;
            }
        }
    }

    int t;
    cin >> t;

    while (t--) {
        int l, r;
        cin >> l >> r;
        int co = -1, co1 ; // Initialize co1 to -1

        for (int i = r; i >= l; i--) {
            if (!sieve[i]) {
                co = i;
            }
        }

        if (co == -1) {
            cout << -1 << endl;
            
        } else {
             int a, b;
                for (int j =2; j<co; j++) {
                if (co % j == 0) {
                    a = co / j;
                    b = j;
                    if(a+b>=l && a+b<=r) break;
                }

            } 
           
           
            cout << a << " " << b<< endl;
        }
    }

    return 0;
}