#include<bits/stdc++.h>
using namespace std;
int main()
{
 int n,m;
 cin>>n>>m;
 vector<int> task(m);
 for(int i=0; i<m; i++){
    cin>>task[i];
 }
 long long ini=1;
 long long  ans=0;
 for(int i=0; i<m; i++){
    int d= task[i]-ini;
    if(d>=0){
        ans+=d;
        ini=task[i];
    }
    else{
        ans+=n+d;
        ini=task[i];
    }
    

 }
 cout<<ans;
 return 0;
}