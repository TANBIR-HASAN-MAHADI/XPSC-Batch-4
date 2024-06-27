#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
 
    ll t;
    cin >> t;
    while (t--)
    {
        ll n,k;
        cin>>n>>k;
 
        ll a;
        map<ll,ll>mp;
        for(ll i=1; i<=n; i++)
        {
            ll x;
            cin>>x;
            if(i==1)
            {
                a=x;
            }
            else
            {
                a&=x;
            }
            for(ll j=0; j<31; j++)
            {
                if((x&(1<<j))==0)
                {
                    mp[j]++;
                }
            }
        }
 
        for(ll i=30; i>=0; i--)
        {
            if(mp[i] && mp[i]<=k)
            {
                k-=mp[i];
                a|=1<<i;
            }
        }
 
        cout<<a<<"\n";
    }
}
