#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>> t;
    while(t--){
        int n;
        cin>>n;

        if(n<9){
            int ans= n*(n+1)/2;
            cout<< ans<<endl;
        }
        else{
            int x=n/10;
            int y=n%10;

            int ans = x*45 + ((x)*(x-1)/2)*10 + y*(y+1)/2 + x*(y+1);
            cout<<ans<<endl;
        }
    }
 return 0;
}
