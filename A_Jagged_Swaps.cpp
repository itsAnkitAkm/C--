#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> v(n,0);
        for(int i=0; i<n; i++){
            cin>>v[i];
        }
        int mi= *min_element(v.begin(),v.end());
        if(v[0]!=mi) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
        
    }
 return 0;
}