#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        vector<string> arr;
        for (int i = 0; i < 10; i++) {
            string s;
            cin >> s;
            arr.push_back(s);
        }

        vector<pair<int, int>> arw;
        for (int i = 0; i < 10; i++) {
            for (int j = 0; j < 10; j++) {
                if (arr[i][j] == 'X') {
                    arw.push_back({i, j});
                }
            }
        }

        int ans = 0;
        for (auto i : arw) {
            if (i.first == 0 || i.first == 9 || i.second == 0 || i.second == 9)
                ans += 1;
            else if (i.first == 1 || i.first == 8 || i.second == 1 || i.second == 8)
                ans += 2;
            else if (i.first == 2 || i.first == 7 || i.second == 2 || i.second == 7)
                ans += 3;
            else if (i.first == 3 || i.first == 6 || i.second == 3 || i.second == 6)
                ans += 4;
            else if (i.first == 4 || i.first == 5 || i.second == 4 || i.second == 5)
                ans += 5;
        }
        cout << ans << endl;
    }
    return 0;
}
