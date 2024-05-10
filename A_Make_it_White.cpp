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

        int f,l;

        for(int i=0; i<s.size(); i++){
            if(s[i]=='B'){
                f=i;
                break;
            }
        }
          for(int i=s.size(); i>=0; i--){
            if(s[i]=='B'){
                l=i;
                break;
            }
        }
        cout<<l-f+1<<endl;
    }
 return 0;
}