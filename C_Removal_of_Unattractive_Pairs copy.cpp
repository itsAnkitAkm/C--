#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        string s;
        cin>>n>>s;
        unordered_map<char,int> m;
        long long maxi =0;
        long long sum =0;
        for(auto it:s){
            m[it]++;
        }

        for( auto it: m){
            if(it.second>maxi){
                maxi=it.second;
            }
        }
        sum= n-maxi;
        long long ans= maxi-sum;

        if(ans<0){
            cout<<n%2<<endl;
        }
        else cout<<ans<<endl;

    }
 return 0;
}