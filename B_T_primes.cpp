#include<bits/stdc++.h>
using namespace std;

vector<int> check(int n){
    vector<int> ans(n+1, 2); // 1 and the number itself are always divisors
    ans[1] = 1; // 1 has only one divisor
    for(int i=2; i*i<=n; i++){
        for(int j=i*i; j<=n; j+=i){
            if(j%i == 0){
                if(j/i == i) ans[j]++; // perfect square
                else ans[j]+=2; // i and j/i are divisors
            }
        }
    }
    return ans;
}

int main(){
    int n;
    cin>>n;
    vector<int> vt(n);
    for(int i=0; i<n; i++){
        cin>>vt[i];
    }
    int max_num = *max_element(vt.begin(), vt.end());
    vector<int> ans = check(max_num);
    for(int i=0; i<n; i++){
        if(ans[vt[i]] == 3){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}
