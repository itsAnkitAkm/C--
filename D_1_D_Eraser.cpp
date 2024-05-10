#include <iostream>
#include <string>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;

        int ops = 0;
        int i = 0;
        while (i < n) {
            if (s[i] == 'B') {
                ops++;
                // Turn the next k cells (if available) to white
                for (int j = i + 1; j < min(n, i + k); j++) {
                    if (s[j] == 'B') {
                        s[j] = 'W';
                    }
                }
            }
            i++;
        }

        cout << ops << endl;
    }
    return 0;
}
