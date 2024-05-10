

#include <bits/stdc++.h>
#define int long long int
using namespace std;

signed main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        int a = n, b = n, c = n;

        for (int i = 2; i * i <= n; i++)
        {
            if (n % i == 0)
            {
                a = i;
                break;
            }
        }
        n = n / a;

        for (int i = 2; i * i <= n; i++)
        {
            if (n % i == 0&&i!=a)
            {
               b=min(b,i);

            }
        }

        c = n / b;

        if (a != b && b != c && c > 1)
        {
            cout << "YES" << endl;
            cout << a << " " << b << " " << c << " " << endl;
        }

        else
        {
            cout << "NO" << endl;
        }
    }
}

