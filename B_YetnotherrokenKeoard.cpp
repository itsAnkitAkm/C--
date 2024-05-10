#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        string s;
        cin >> s;
        vector<pair<int,char>> up;
        vector<pair<int,char>> low;

        for(int i = 0; i < s.size(); i++) {
            if(isupper(s[i]) && s[i]!='b' && s[i]!='B') up.push_back({i, s[i]});
            else if(islower(s[i])&& s[i]!='b' && s[i]!='B') low.push_back({i, s[i]});
            else if(s[i] == 'B' && !up.empty()) up.pop_back();
            else if(s[i] == 'b' && !low.empty()) low.pop_back();
        }
                
        

        vector<pair<int,char>> ans;

        for(auto it : up) {
            ans.push_back(it);
        }

        for(auto it : low) {
            ans.push_back(it);
        }

        sort(ans.begin(), ans.end());

        for(auto it: ans) {
            cout << it.second;
        }
        cout << endl;
    }
        
    return 0;

    }
