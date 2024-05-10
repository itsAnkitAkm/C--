#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--){
        int n;
        cin>>n;
        vector<int> v(n,0);
        for(int i=0; i<n; i++){
           cin>> v[i];
        }

        int s=1;
        long long ans=0;
        for(int i=0; i<n; i++){
            int d= v[i]-s;
            if(d>0) ans+=d;
            s=v[i];
        }
        cout<<ans<<endl;
    }
 return 0;
}
