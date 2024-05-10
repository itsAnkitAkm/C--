#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        map<char, int> m;
        for(int i=0; i<s.size(); i++){
            m[s[i]]++;
        }
        long long ans = 0; // Initialize ans to 0
        for(auto &i: m){
           // cout<<i.first<<i.second<<endl;
            if(i.second >= i.first-'A'+1) ans++;
        }
        cout<<ans<<endl;
    }
 return 0;
}
