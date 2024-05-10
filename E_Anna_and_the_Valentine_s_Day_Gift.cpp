#include<bits/stdc++.h>
using namespace std;
#define ll long long 

ll reverseDigits(ll num) 
{ 
    ll rev_num = 0; 
    while (num > 0) { 
        rev_num = rev_num * 10 + num % 10; 
        num = num / 10; 
    } 
    return rev_num; 
}

int main()
{
    ll t;
    cin>>t;
    while(t--){
        ll n,m;
        cin>>n>>m;
        vector<ll> v(n);
        for(ll i=0; i<n; i++){
            cin>>v[i];
        }
        vector<ll> zero;

        for(ll i=0; i<n; i++){
            if(v[i]>9){
              if(v[i]%10==0) zero.push_back(v[i]);
            }
        }
        vector<pair<ll,ll>> z;

        for(ll i=0; i<zero.size(); i++){
            ll c=0;
            ll x=zero[i];
            while(x%10==0){
                c++;
                x=x/10;
            }
            z.push_back({c,zero[i]});
        }
        sort(z.begin(),z.end());
        reverse(z.begin(),z.end());

        string con="";

        for(ll i=0; i<z.size(); i++){
            if(i%2==0){
                z[i].second=reverseDigits(z[i].second);
            }
            con+=to_string(z[i].second);
        }

        string s="";
        for(ll i=0; i<n; i++){
           if(v[i]%10!=0) s+=to_string(v[i]);
        }

        if(s.size()+con.size()>=m+1) cout<<"Sasha"<<endl;
        else cout<<"Anna"<<endl;

    }
 return 0;
}
