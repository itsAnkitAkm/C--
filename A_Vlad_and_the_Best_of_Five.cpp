#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        unordered_map<char,int> mp;

        for(int i=0; i<s.size(); i++){
            mp[s[i]]++;
        }

        if(mp['A']>mp['B']) cout<<"A"<<endl;
        else cout<<"B"<<endl;
    }
 return 0;
}