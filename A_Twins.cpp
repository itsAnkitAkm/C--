#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    vector<int> arr;
    cin >> n;
    
    arr.resize(n);  // Resize the vector to hold 'n' elements
    
    for(int i = 0; i < n; ++i){
        cin >> arr[i];
    }
    
    sort(arr.begin(), arr.end(),greater<int>());
    int c = 0, temp = 0;
    int sum = accumulate(arr.begin(), arr.end(), 0);
    
    for(int i = 0; i < n; ++i){
        if(temp > sum){
            break;
        }
        temp += arr[i];
        sum -= arr[i];
        c++;
    }
    
    cout << c;
    return 0;
}
