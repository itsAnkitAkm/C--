#include<bits/stdc++.h>
using namespace std;
int main()
{
 long long n;
    cin>>n;
    vector<long long> v(n),temp(n);
    for(long long i=0;i<n;i++)
    {
        cin>>v[i];
        temp[i]=v[i];
    }
    sort(v.begin(), v.end());
    long long first=-1,second=-1;
    for(long long i=0;i<n;i++)
    {
        if(v[i]!=temp[i])
        {
            if(first==-1)
                first=i;
            second=i+1;
        }
    }
    if(first==-1 && second==-1) // the sequence is already sorted
    {
        cout<<"yes"<<endl;
        cout<<1<<" "<<1<<endl; // any subsequence of length 1 can be reversed
    }
    else
    {
        reverse(temp.begin()+first,temp.begin()+second);
        if(is_sorted(temp.begin(), temp.end()))
        {
            cout<<"yes"<<endl;
            cout<<first+1<<" "<<second<<endl;
        }
        else
            cout<<"no"<<endl;
    }
    return 0;
}
