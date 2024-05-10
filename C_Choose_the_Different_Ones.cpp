#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int testCases;
    cin >> testCases;
    while(testCases--) {
        int arraySize1, arraySize2, limit;
        cin >> arraySize1 >> arraySize2 >> limit;
        vector<int> array1(arraySize1), array2(arraySize2);
        for(auto &element : array1){
            cin >> element;
        }
        for(auto &element : array2){
            cin >> element;
        }
        unordered_set<int> set1, set2;
        for(auto element : array1){
            if(element <= limit){
                set1.insert(element);
            }
        }
        for(auto element : array2){
            if(element <= limit){
                set2.insert(element);
            }
        }
        if(set1.size() < limit/2 || set2.size() < limit/2) {
            cout << "NO" << endl;
        } else {
            unordered_set<int> combinedSet;
            for(auto element : set1){
                combinedSet.insert(element);
            }
            for(auto element : set2){
                combinedSet.insert(element);
            }
            if(combinedSet.size() != limit) {
                cout << "NO" << endl;
            } else {
                cout << "YES" << endl;
            }
        }
    }
    return 0;
}
