#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        int con=0;
        int em=0;
        bool t= true;
        for(int i=0; i<n; i++){
            if(s[i]=='.'){
                em++;
                con++;
                if(con==3){
                    cout<<2<<endl;
                    t= false;
                    break;
                }
            }
            else if(s[i]=='#'){
                con=0;
            }
        }
        if(t)cout<<em<<endl;
        
    }
 return 0;
}