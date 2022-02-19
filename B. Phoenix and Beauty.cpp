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
        ll a,k;
        cin>>a>>k;
        set<ll>s;
        ll b=k;
        ll c=a;
        for(ll i=0; i<a; i++)
        {
            ll n;
            cin>>n;
            s.insert(n);
        }
        if(s.size()>k)
        {
            cout<<-1<<endl;
        }
        else
        {
            cout<<a*k<<endl;
            for(ll j=0; j<a; j++)
            {
                for(ll it:s)
                {
                    cout<<it<<" ";
                }
                for(ll i=0; i<k-s.size(); i++)
                {
                    cout<<1<<" ";
                }
            }
            cout<<endl;
        }
    }
}

