#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
   while(t--){
     int n;
    cin >> n;
    vector<int> v(n);
    for (auto &it : v) {
        cin >> it;
    }
    map<char,int> map; 
    for (char i = 'a'; i <= 'z'; i++) {
        map[i] = 0;
    }
    string res;
    for (auto it : v) {
        for (auto &it2 : map) { 
            if (it2.second == it) {
                res += it2.first;
                it2.second++;
                break;
            }
        }
    }
    cout << res << endl;

   }
   return 0;
}