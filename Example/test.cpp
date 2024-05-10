#include <bits/stdc++.h>
using namespace std;
int main(){
    int arr[5]={5,15,8,12,1,},n;
    n= sizeof(arr)/sizeof(arr[0]);

    sort(arr,arr+n);

    for(int i=0; i<n;  i++){
        cout<<arr[i]<<" ";
    }




}