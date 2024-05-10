#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int ans= INT_MAX;
        while(n--){
            int d,s;
        
        cin>>d>>s;
        if(s%2!=0) 
        {
            int temp= d+ (s/2);
            ans= min(temp,ans);
        }
        else {
            int temp= d+ (s/2)-1;
            ans= min(temp,ans);
        }
        
        }
        cout<<ans<<endl;
    }
 return 0;
}