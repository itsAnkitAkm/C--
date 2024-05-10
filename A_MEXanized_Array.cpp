#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,k,x;
        cin>>n>>k>>x;
        if(k>n || k-x>1) cout<<-1<<endl;
        else{
           long long fn= ((k-1)*k)/2;
           long long ln;
           if(k==x) ln= (n-k)*(x-1);
           else  ln= (n-k)*(x);

           cout<<fn+ln<<endl;
        }
    }
 return 0;
}