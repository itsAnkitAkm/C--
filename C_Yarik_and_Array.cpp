#include<bits/stdc++.h>
using namespace std;
    int maxSum(vector<int> v, int n){
        
        int maxi=INT_MIN;
        int sum=0;
        for(int i=0;i<n;i++){
            sum+=v[i];
             maxi=max(sum,maxi);
           
           if(i!=n-1){ 
            if(sum<0 ||( abs(v[i])%2==abs(v[i+1])%2)){
                sum=0;
            }
            }
        }
        return maxi;
        
    }
    int main(){
        int t;
        cin>>t;
        while(t--){
            int n;
            cin>>n;
            vector<int> v(n);
            for(int i=0;i<n;i++){
                cin>>v[i];
            }
           int t=maxSum(v,n);
           cout<<t<<endl;
        }
        return 0;
    }