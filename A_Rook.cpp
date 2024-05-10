#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        for(int i=1; i<9; i++){
            if(i != s[1]-'0')
                cout << s[0] << i << endl;
        }
        for(char i='a'; i<='h'; i++){
            if(i != s[0])
                cout << i << s[1] << endl;
        }
    }
    return 0;
}
