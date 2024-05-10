#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<int> v(n, 0);

        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }

        int l=0;
        int r=0;
        int d = max_element(v.begin(), v.end()) - min_element(v.begin(), v.end());
        int k = 0;

        while (k < n) {
            k++;
            l += v[k - 1];
            r += v[n - k];

            if (n % k == 0) {
                if (abs(r - l) > d)
                    d = abs(r - l);
            }
        }

        cout << d << endl;
    }

    return 0;
}
