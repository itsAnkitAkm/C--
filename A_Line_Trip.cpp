#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,x;
        cin>>n>>x;
        vector<int> v(n,0);
        for(int i=0; i<n; i++){
            cin>>v[i];
        }
        int max_diff = 2*(x-v[n-1]);

        for(int i=0; i<n-1; i++){
            if(v[i+1]-v[i]>max_diff){
                max_diff=v[i+1]-v[i];
            }
        }
        if(v[0]>max_diff) cout<<v[0]<<endl;
        else if(max_diff==x-v[n-1]) cout<<2*max_diff<<endl;
        else cout<<max_diff<<endl;
    }
 return 0;
}
