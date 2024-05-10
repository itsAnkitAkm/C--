#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    bool flag=0;
    vector<int> arr(n);
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    
    for(int i=0; i<(1<<n); i++){
        int sum=0;
        for(int j=0; j<n; j++){
            if(i &(1<<j)) sum+=arr[j];
            else sum-=arr[j];
        }
        if(sum%360==0){
            flag=1;
            break;
        }
    }
    if(flag) cout<<"YES";
    else cout<<"NO";
 return 0;
}