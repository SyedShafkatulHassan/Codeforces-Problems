//Bismillahir Rahmanir Rahim
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
int main()
{
    ll n,t;
    cin>>t>>n;
    vector<ll>v;
    vector<ll>w;
    ll d=0;
    if(n==0)
    {
        if(t==1)
        {
            cout<<0<<" "<<0<<endl;
        }
        else
        {
            cout<<-1<<" "<<-1<<endl;
        }
    }
    else
    {
        ll f=0;
        while(1)
        {
            if(t==0)
            {
                break;
            }
            if(n>9)
            {
                t--;
                ll a=0;
                n=n-9;
                v.pb(9);
            }
            else
            {
                if(f==0)
                {
                    f=1;
                    v.pb(n);
                    n=0;
                    t--;
                }
                else
                {
                    v.pb(0);
                    t--;
                }

            }
        }
        if(n!=0)
        {
            cout<<"-1"<<" "<<"-1"<<endl;
        }
        else
        {
            for(ll i=0; i<v.size(); i++)
            {
                w.pb(v[i]);
            }
            if(v[v.size()-1]!=0)
            {
                for(ll i=v.size()-1; i>=0; i--)
                {
                    cout<<v[i];
                }
            }
            else
            {
                for(ll i=v.size()-1; i>=0; i--)
                {
                    if(v[i]!=0)
                    {
                        v[i]=v[i]-1;
                        break;
                    }
                }
                for(ll i=v.size()-1; i>=0; i--)
                {
                    if(i==v.size()-1)
                    {
                        cout<<1;
                    }
                    else
                    {
                        cout<<v[i];
                    }
                }
            }
            cout<<" ";
            for(ll i=0; i<v.size(); i++)
            {
                cout<<w[i];
            }
            cout<<endl;
        }
    }
}


