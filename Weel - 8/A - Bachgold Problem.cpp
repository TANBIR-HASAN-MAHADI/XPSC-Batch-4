#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    if (n % 2 == 0)
    {
        cout << n / 2 << "\n";
        for (int i = 0; i < n / 2; i++)
        {
            cout << 2 << " ";
        }
    }
    else
    {
        int ans = n - 3;
        cout << ans / 2 + 1 << "\n";
        for (int i = 0; i < ans / 2; i++)
        {
            cout << 2 << " ";
        }
        cout << 3;
    }
}
