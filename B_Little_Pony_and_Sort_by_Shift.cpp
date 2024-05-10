#include<bits/stdc++.h>
using namespace std;

int min_operations_to_sort(vector<int>& arr) {
    int n = arr.size();
    int max_len = 1;
    for(int i=n-2; i>=0; i--) {
        if(arr[i] <= arr[i+1]) {
            max_len++;
        } else {
            break;
        }
    }
    return n - max_len;
}

int main() {
    vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 1};
    cout << min_operations_to_sort(arr) << endl;  // Output: 7
    return 0;
}
