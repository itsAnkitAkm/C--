#include <bits/stdc++.h>
using namespace std;
    vector<long long> lcmAndGcd(long long A , long long B) {
        // code here
        vector<long long> vec1(2);
        long long mi,ma,l,g;
        mi= min(A,B); 
        ma= max(A,B);
        for(int i=1; i<=mi; i++){
            if(A%i==0 && B%i==0){
                g=i;
            }
                }
        for(int i=1; i<=mi; i++){
        if(ma*i%mi==0){
                l= ma*i;
                break;
            }
                }

        
        vec1[0]=l;
        vec1[1]=g;

        
        return vec1;
    }
int main(){
    long long a=4 , b=8;
    cout<<lcmAndGcd(a,b);
}