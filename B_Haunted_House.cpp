#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        string s;
        cin>>n>>s;
        int zero=0;

        for(auto i: s){
            if(i=='0') zero++;
        }
        if(zero == 0) {
            for(int i=1; i<=n; i++) {
                cout<<-1<<" ";
            }
            cout<<endl;
            continue;
        }
        int sp=0;
        for(int i=1; i<=n; i++){
            if(i>zero){
                cout<<-1<<" ";
                continue;
            }
            if(n-2-i >= 0 && s[n-2-i]=='0') cout<<sp<<" ";
            else{
                int c=1;
                for(int j=n-1-i; j>=0; j--){
                    if(s[j]=='0'){
                        sp+=c;
                        cout<<sp<<" ";
                        break;
                    }
                    c++;
                }
            }
        }
        cout<<endl;
    }
 return 0;
}
