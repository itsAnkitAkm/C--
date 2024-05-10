#include <bits/stdc++.h>
using namespace std;
bool possible(int n, vector<int> &v){
    bool h=1;
    vector<int> count(n+2,0);
    for(auto i: v){
        count[1]++;
        count[i+1]--;
    }
    int sum=0;
    for(int i=1; i<n+1; i++){
        sum+=count[i];
        if(sum!=v[i-1]){
            h=0;
            break;
        }
    }
    return h;
}

void input(){
    int n;
    cin>>n;
    vector<int> v(n);
    bool h=1;
    for(int i=0; i<n; i++){
        cin>>v[i];
        if(v[i]>n) h=0;
    }
    if(!h){
        cout<<"NO"<<endl;
        return;
    }
    if(possible(n,v)) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}


int main(){
    int t;
    cin>>t;
    for(int i=0; i<t; i++){
        input();
    }
    return 0;
    
}