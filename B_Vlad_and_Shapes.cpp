#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<vector<char>> v(n, vector<char>(n)); // Declare a 2D vector of size n x n
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                cin>>v[i][j]; // Read the elements into the 2D vector
            }
        }

        int mini=INT_MAX,maxi=INT_MIN;

        for(int i=0; i<n; i++){
            int sum=0;
            for(int j=0; j<n; j++){
                sum+=v[i][j]-'0'; // Sum the elements in each row
            }
            if(sum!=0)
            {mini= min(mini,sum);
            maxi= max(maxi,sum);}
        }

        if(maxi==mini) cout<<"SQUARE"<<endl;
        else cout<<"TRIANGLE"<<endl;
    }
 return 0;
}
