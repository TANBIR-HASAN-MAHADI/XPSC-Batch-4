#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define yes cout << "YES\n"
#define no cout << "NO\n"
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        map<ll, vector<int>> l, r;
        for (int i = 1; i <= n; i++)
        {
            int num;
            cin >> num;
            r[num].push_back(i);
            if (l.count(num) == 0)
                l[num].push_back(i);
        }
        while (m--)
        {
            int x, y;
            cin >> x >> y;
            if (l[x].empty() || r[y].empty() || l[x][0] >= r[y].back())
                no;
            else
                yes;
        }
    }
    return 0;
}
