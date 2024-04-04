#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<ll> a(n);
        ll sum = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            sum += abs(a[i]);
        }
        int x = 0;
        for (int i = 0; i < n;)
        {
            if (a[i] < 0)
            {
                while (i < n && a[i] <= 0)
                {
                    i++;
                }
                x++;
            }
            else
            {
                i++;
            }
        }
        cout << sum << " " << x << "\n";
    }
}
