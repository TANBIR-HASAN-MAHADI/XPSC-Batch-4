#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b;
    cin >> a >> b;
    if (a > b)
    {
        cout << a + (a - 1) << "\n";
    }
    else if (a < b)
    {
        cout << b + (b - 1) << "\n";
    }
    else
    {
        cout << a + b << "\n";
    }

    return 0;
}
