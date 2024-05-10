#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        long long ans=0;
        int ini=1;
        for(int i=0; i<4;i++){
            int a;
            if(s[i]=='0'){
                a= 10-ini;
                ans+=a;
                ini=10;
            }
            else{
                int si= s[i]-'0';
                a=si-ini;
                ans+=abs(a);
                ini=si;
            }
        }
        ans=ans+4;
        cout<<ans<<endl;
    }
 return 0;
}