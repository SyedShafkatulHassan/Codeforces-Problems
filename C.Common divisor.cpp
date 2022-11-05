//Bismillahir Rahmanir Rahim
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define in inset
#define all(x) (x).begin(),(x).end()
int main()
{
    ll n;
    cin>>n;
    ll xn=0;
    for(ll i=0; i<n; i++)
    {
        ll a;
        cin>>a;
        xn=__gcd(xn,a);
    }
    ll ans=0;
    for(ll i=1; i<=sqrt(xn); i++)
    {
        if(xn%i==0)
        {
            ans++;
            if(i*i<xn)
            {
                ans++;
            }
        }
    }
    cout<<ans<<endl;
}


