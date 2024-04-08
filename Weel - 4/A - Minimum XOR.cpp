#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
int t;
cin>>t;
while(t--)
{
    int n;
    cin>>n;
    vector<ll>a(n);
    
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    ll k=a[0];
    for(int i=1;i<n;i++)
    {
        k=k^a[i];
    }
    
    ll mn=k;
    for(int i=0;i<n;i++)
    {
        ll k1=k^a[i];
        mn=min(mn,k1);
    }
    
    cout<<mn<<"\n";
}

}
