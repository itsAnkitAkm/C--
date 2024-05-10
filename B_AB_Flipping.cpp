#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        string s;
        cin>>s;

        long long a=0;
        long long b=0;
        long long idx=0;
        long long ia=0;
        for(long long i=0; i<n; i++){
            if(s[i]=='A'){
                 ia=i;
                 break;}
        }
        for(long long i=0; i<n; i++){
            if(s[i]=='B') idx=i;
        }
        for(int i=0; i<idx; i++){
            if(s[i]=='A') a++;
            else if(s[i]=='B') b++;
        }
        if (a==0) cout<<a<<endl;
        else cout<<a+b-ia<<endl;
    }
 return 0;
}