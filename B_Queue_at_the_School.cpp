#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,t;
    cin>>n>>t;
    string s;
    cin>>s;

    while(t--){
        vector<int> rec;

        for(int i=0; i<n-1; i++){
            if(s[i]=='B' && s[i+1]=='G') rec.push_back(i);
        }
        for(auto i: rec){
            swap(s[i],s[i+1]);
        }
    }
    cout<<s;
 return 0;
}