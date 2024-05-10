#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int k;
    vector<int> v(26);

    cin>>s;
    cin>>k;
    for(int i=0; i<26; i++){
        cin>>v[i];
    }

    long long ans=0;
    for(int i=0 ; i<s.size(); i++){
        ans+= (i+1)*v[s[i]-'a'];
    }
    int mx = *max_element(v.begin(), v.end());
    for(int i=s.size()+1; i<=s.size()+k; i++){
        ans+= i*mx;
    }

    cout<<ans;

 return 0;
}
