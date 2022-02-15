//Bismillahir Rahmanir Rahim
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
int main()
{
    vector< pair <ll,ll> > v;
    ll s;
    cin>>s;
    for(ll i=0;i<s;i++)
    {
        ll j,k;
        cin>>j>>k;
        v.push_back( make_pair(k,j));
    }
    sort(v.begin(),v.end());
    ll a;
    ll d=v[0].first;
    ll z=1;
    for(ll i=0;i<s;i++)
    {
        if(d<v[i].second)
        {
           z++;
           d=v[i].first;
        }
    }
    cout<<z<<endl;
}
