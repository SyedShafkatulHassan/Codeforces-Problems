//Bismillahir Rahmanir Rahim
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define eb emplace_back
int main()
{

    vector< pair <ll,ll> > v;
    ll n;
    cin>>n;
    for(ll i=0; i<n; i++)
    {
        ll a,b;
        cin>>a>>b;
        v.pb({a,b});
    }
    sort(v.begin(),v.end());
    ll a=0;
    for(ll i=0; i<n; i++)
    {
        if(a <= v[i].second)
        {
            a = v[i].second;
        }
        else
        {
            a=v[i].first;
        }
    }
    cout<<a<<endl;

}

