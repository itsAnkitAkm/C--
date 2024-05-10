#include<bits/stdc++.h>
using namespace std;
 int trap(vector<int>& height) {
        int n= height.size();
        int l=0, r=n-1;
        int lm=0, rm=0;
        int res=0;

        while(l<=r){
            if(height[l]<=height[r]){
                if(height[l]>=lm) lm=height[l];
                else res+=lm-height[l];
                l++;
            }
            else{
                
                if(height[r]>=rm) rm=height[r];
                else res+=rm-height[r];
                r--;
            }
        }
        return res;
    }
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,w;
        cin>>n>>w;
        vector<int> h;
        for(int i=0; i<n; i++){
            cin>>h[i];
        }
        int ans=0;
        int sz = min(h[0],h[n-1]);
        while(ans<=w){
            vector<int> temp(n+2,0);
            temp.push_back(sz);
            for(int i=0; i<n; i++){
                temp.push_back(h[i]);
            }
            temp.push_back(sz);
            ans= trap(temp);
            sz++;
        }
        cout<<sz<<endl;
        
    }
 return 0;
}