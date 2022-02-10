//Bismillahir Rahmanir Rahim
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
int main()
{
    ll n;
    cin>>n;
    vector<ll>v;
    for(ll i=0;i<n;i++)
    {
        ll asp;
        cin>>asp;
        v.pb(asp);
    }
    sort(v.begin(),v.end());
    ll maximul=0;
    ll atp=0;
    maximul=v[v.size()-1]-v[0];
    for(ll i=0;i<n;i++)
    {
         if(v[i]==v[0])
         {
             atp++;
         }
    }
    ll pk=0;
    for(ll i=n-1;i>=0;i--)
    {
         if(v[i]==v[n-1])
         {
            pk++;
         }
    }
    if(v[0]==v[n-1])
    {
        cout<<maximul<<" "<<((n)*(n-1))/2<<endl;
    }
    else
    {
        cout<<maximul<<" "<<atp*pk<<endl;
    }
}

