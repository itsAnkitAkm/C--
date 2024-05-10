#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,x;
        cin>>n>>x;
        vector<int>a(n,0),b(n,0);
        for(int &i:a){
            cin>>i;
        }
        for(int &i:b){
            cin>>i;
        }
        int mini= *min_element(a.begin(),a.end());
        int maxi= *max_element(a.begin(),a.end());
        vector<int> mi, ma, rem;
        for(int i=0; i<n; i++){
            if(b[i]<mini) mi.push_back(b[i]);
            else if(b[i]>=maxi) ma.push_back((b[i]));
            else rem.push_back(b[i]);
        }
        if(x<mi.size()||x>(n-ma.size()))cout<<"NO"<<endl;
        else{
            cout<<"YES"<<endl;
            
        } 
    }
 return 0;
}
