#include<bits/stdc++.h>
using namespace std;
int main()
{
    double t,a,b,c;
    cin>>t;
    while(t--){
        cin>>a>>b>>c;
        if(a==b) cout<<0<<endl;
        else if(a<=c && b<=c) cout<<1<<endl;
        else{double dif= abs((a-b)/2);
        //cout<<"dif="<<dif<<endl;
        int ans= ceil((dif)/c);
        cout<<ans<<endl;}
    }
 return 0;
}