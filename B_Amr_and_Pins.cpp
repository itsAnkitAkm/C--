#include<bits/stdc++.h>
using namespace std;
int main()
{
    int r, x,y,x1,y1;

    cin >> r >> x >> y >> x1 >> y1;

    double ans = sqrt(pow((x1 - x), 2) + pow((y1 - y), 2));
    int step = ceil(ans / (2 * r));
    cout << step;

    return 0;
}