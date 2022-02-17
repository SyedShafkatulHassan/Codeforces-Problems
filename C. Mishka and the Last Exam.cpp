//Bismillahir Rahmanir Rahim
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
int main()
{
    ll m;
    cin>>m;
    vector<ll>v;
    for(ll i=0;i<m/2;i++)
    {
      ll a;
      cin>>a;
      v.pb(a);
    }
    vector<ll>vc;
    vector<ll>v3;
    ll sum=0;
    ll a=0;
    ll summ=0;
    for(ll i=0;i<m/2;i++)
    {
        if(i==0)
        {
            vc.pb(0);
            v3.pb(v[i]);
        }
        else
        {
            if(v[i-1]<v[i])
            {
                 ll d=sum;
                 sum=v[i]-v[i-1];
                 sum=max(d,sum);
                 //cout<<v[i]-v[i-1]<<endl;
                 //cout<<d<<endl;
                 //cout<<sum<<endl;
                 //cout<<v[i]<<endl;
                 //cout<<endl<<endl;
                 v3.pb(v[i]-sum);
                 vc.pb(sum);
                  v[i]=v[i]-sum;
                 //cout<<sum<<endl;
            }
            else
            {
                 vc.pb(sum);
                 v3.pb(v[i]-sum);
                 v[i]=v[i]-sum;
            }
        }
        //cout<<sum<<endl;
    }
    for(ll i=0;i<vc.size();i++)
    {
        cout<<vc[i]<<" ";
    }
    for(ll i=v3.size()-1;i>=0;i--)
    {
        cout<<v3[i]<<" ";
    }
    for(ll i=0;i<v3.size();i++)
    {
        //cout<<v3[i]<<endl;
    }
}

