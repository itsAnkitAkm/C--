#include<bits/stdc++.h>
using namespace std;
int main()
{
 int t;
 cin>>t;
    while(t--){
        int x,k;
        cin>>x>>k;

        
            
            for(int i=x; true; i++){
                int ans=0;
                string temp= to_string(i);
                for(int j=0; j<temp.size(); j++){
                    ans+= temp[j]-'0';
                }

                if(ans%k==0){
                    cout<<i<<endl;
                    break;
                }
                
            }
        
    }
 return 0;
}