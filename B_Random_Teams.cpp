#include<bits/stdc++.h>
using namespace std;
#define ll long long


 

 int main()
{
    ll n,m;
    cin>>n>>m;
    if(m==1){
        cout<<(n*(n-1))/2<<" "<<(n*(n-1))/2;
    }
    else{
        ll kmin,kmax;
      
        ll eq= n/m;
        ll rem=n%m;
        ll mul=m-rem;
        kmin= mul*((eq*(eq-1))/2)+rem*((eq+1)*eq/2);
         kmax= ((n-(m-1))*(n-(m-1)-1))/2;
        cout<<kmin<<" "<<kmax;
        
       
    }
 return 0;
}