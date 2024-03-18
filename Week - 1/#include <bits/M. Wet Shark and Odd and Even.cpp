#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n;
    cin >> n;
    vector<ll> a(n);
    ll sum = 0;
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
        sum += a[i];
    }
    if (sum % 2 == 0)
    {
        cout << sum << "\n";
        return 0;
    }
    sort(a.begin(), a.end());
    ll mn_odd;
    for (ll i = 0; i < n; i++)
    {
        if (a[i] % 2 != 0)
        {
            mn_odd = a[i];
            break;
        }
    }
    cout << sum - mn_odd << "\n";
}
