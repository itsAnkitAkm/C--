#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<pair<int,int>> v(n-1);
        for(auto &i: v){
            cin>>i.first>>i.second;
        }
        unordered_map<int,int> m;
        for(auto i : v){
            m[i.first]++;
            m[i.second]++;
        }
        int ans=0;
        for(auto i:m){
            if(i.second==1){
                ans+=i.second; 
            }
        }
        if(ans%2){
        cout<<(ans+1)/2<<endl;
         }
        else cout<<ans/2<<endl;
    }
 return 0;
}
