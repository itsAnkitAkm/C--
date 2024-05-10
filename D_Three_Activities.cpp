#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> a(n),b(n),c(n);
        
        for(int i=0; i<n; i++){
            cin>>a[i];
        }
        for(int i=0; i<n; i++){
            cin>>b[i];
        }
        for(int i=0; i<n; i++){
            cin>>c[i];
        }

        vector<pair<int ,pair<int,int>> v(3*n);

        for(int i=0; i<n; i++){
            v.push_back[{a[i],{i,1}}];
            v.push_back[{b[i],{i,2}}];
            v.push_back[{c[i],{i,3}}];
        }

        sort(v.begin(), v.end());
        int ans=v[0].first;
        int a1=-1,a2=-1;
        for(int i=1; i<3*n; i++){
            if(v[i].second.first!=v[0].second.first && v[i].second.second!=v[0].second.second){
                ans+=v[i].first;
                a1=v[i].second.first;
                a2=v[i].second.second;
                break;
            }
        }
                for(int i=1; i<3*n; i++){
            if(v[i].second.first!=v[0].second.first && v[i].second.second!=v[0].second.second && v[i].second.first!=a1 && v[i].second.second!=a2){
                ans+=v[i].first;
                break;
            }
        }

        cout<<ans<<endl;
        
            }
 return 0;
}