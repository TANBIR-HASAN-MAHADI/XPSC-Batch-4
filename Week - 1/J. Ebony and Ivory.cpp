#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int a, b, c;
    cin >> a >> b >> c;

    for (int i = 0; i <= c/a; i++) 
    {
        if (i * a > c) 
        break;
        if ((c - i * a) % b == 0) 
        {
            cout << "Yes" << "\n";
            return 0;
        }
    }
    
    cout << "No" << "\n";
    return 0;
}
