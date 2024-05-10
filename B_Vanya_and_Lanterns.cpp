#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,l;
    cin>>n>>l;
    double ans=INT_MIN, prev=0.0;
    vector<int> v(n,0);
    for(auto &i: v){
        cin>>i;
    }
    sort(v.begin(), v.end());
    for(int i=0; i<n; i++){
        double r;
        if(i==0){
            r= (double)(v[i]-prev);
        }
        else{
         r= (double)(v[i]-prev)/2.0;}
        prev=v[i];
        ans=max(r,ans);
    }
    ans = max(ans, (double)(l - v[n-1])); // handle the case where the last lamp is at the end of the street
    cout<<fixed<<setprecision(10)<<ans<<endl; // print the answer with a precision of 9 decimal places
 return 0;
}
