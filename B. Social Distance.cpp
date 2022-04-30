//Bismillahir Rahmanir Rahim
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define all(x) (x).begin(),(x).end()
int main()
{
    ll tc;
    cin>>tc;
    for(int p=0; p<tc; p++)
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
        ll sum=0;
        sort(all(v));
        for(ll i=0;i<n;i++)
        {
            sum=sum+v[i];
            sum++;
        }
        sum=sum-v[0];
        sum=sum+v[n-1];
        if(sum<=k)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"No"<<endl;
        }
    }
}

