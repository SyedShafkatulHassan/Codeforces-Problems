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
        ll n;
        cin>>n;
        ll arr[n];
        for(ll i=0; i<n; i++)
        {
            cin>>arr[i];
        }
        map<ll,ll>mp;
        for(int i=0; i<n; i++)
        {
            mp[arr[i]]++;
        }
        ll f=0;
        for(auto u:mp)
        {
            if(u.second>=3)
            {
                cout<<u.first<<endl;
                f=1;
                break;
            }
        }
        if(f==0)
        {
            cout<<-1<<endl;
        }
    }
}

