//Bismillahir Rahmanir Rahim
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
int main()
{
    ll n,k;
    cin>>n>>k;
    vector<ll>v;
    for(ll i=0;i<n;i++)
    {
         ll a;
         cin>>a;
         v.pb(a);
    }
    vector<ll>pre(n);
    pre[0]=v[0];
    ll sum=0;
    for(ll i=1;i<n;i++)
    {
       pre[i]=v[i]+pre[i-1];
    }
    int ans=upper_bound(pre.begin(),pre.end(),k)-pre.begin();
    ll x=ans+1;
    ll y=0;
    ll asokhelbo=ans;
    while(y<n-1)
    {
        if(y<n && x<n && pre[x]-pre[y]<=k)
        {
           asokhelbo=max(asokhelbo,x-y);
           if(x<n-1)
           {
               x++;
           }
           else
           {
               y++;
           }
        }
        else
        {
            y++;
        }
    }
    cout<<asokhelbo<<endl;
}












