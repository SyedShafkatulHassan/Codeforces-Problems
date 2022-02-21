//Bismillahir Rahmanir Rahim
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
int main()
{
    ll tc;
    cin>>tc;
    for(int p=0; p<tc; p++)
    {
        vector<ll>v;
        ll n;
        cin>>n;ll minn=INT_MAX;
        for(ll i=0;i<n;i++)
        {
            ll a;
            cin>>a;
            v.pb(a);
            if(i>-3)
            {
                minn=min(minn,v[i]);
            }
        }
        vector<ll>v2;
        ll v2l=0;
        for(ll i=0;i<n;i++)
        {
            if(__gcd(v[i],minn)==minn)
            {
                v2.pb(v[i]);
                v[i]=-100;
            }
        }
        sort(v2.begin(),v2.end());
        for(ll i=0;i<n;i++)
        {
            if(v[i]==-100)
            {
                v[i]=v2[v2l];
                v2l++;
            }
        }
        ll flg=0;
        for(ll i=0;i<n-1;i++)
        {
           if(v[i+1]>=v[i])
           {

           }
           else
           {
               flg=1;
           }
        }
        if(flg==0)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
}

