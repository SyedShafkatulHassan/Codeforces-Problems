//Bismillahir Rahmanir Rahim
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
void printFrequency(vector<ll> v)
{
    map<int,int>mp;
    for(int i=0; i<v.size(); i++)
    {
        mp[v[i]]++;
    }
    for(auto u:mp)
    {
        cout<<u.first<<" "<<u.second<<endl;
    }
}
int main()
{
       vector<ll>v;
       ll n,m;
       cin>>n>>m;
       for(ll i=0;i<m;i++)
       {
          ll a;
          cin>>a;
          v.pb(a);
       }
       sort(v.begin(),v.end());
       ll ans1=100000000000000;
       for(ll i=0;i<v.size()-1;i++)
       {
           if(i+n>m)
           {
               break;
           }
           ll minn=abs(v[i]-v[i+n-1]);
           if(minn<=ans1)
           {
               ans1=minn;
           }
       }
       //printFrequency(v);
       cout<<ans1<<endl;
}


