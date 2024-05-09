#include <bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long i, j, k, c1 = 1, c2 = 1, count = 0, mx = 0, p = 1, q, mn = 10000000000;
        long long n, ans = 0, sum = 0, ans1 = 0, ans2 = 0;
        cin >> n >> k;
        while (k > 0)
        {
            if (k % 2 != 0)
                sum += p % mod;
            k = k / 2;
            p = (p * n) % mod;
        }
        cout << sum % mod << "\n";
    }
    return 0;
}
