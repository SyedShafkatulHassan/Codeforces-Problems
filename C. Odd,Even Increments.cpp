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
        vector<ll>v;
        set<ll>s;
        for(ll i=0; i<n; i++)
        {
            ll a;
            cin>>a;
            v.pb(a);
            s.insert(a);
        }
        ll a=0,b=0,c=0,d=0;
        for(ll i=0; i<n; i++)
        {
            if(i%2==0)
            {
                if(v[i]%2==0)
                {
                    a=1;
                }
                else
                {
                    b=1;
                }
            }
            else
            {
                if(v[i]%2==0)
                {
                    c=1;
                }
                else
                {
                    d=1;
                }
            }
        }
        if((a==1 && b==1 ) ||(c==1 && d==1))
        {
            cout<<"NO"<<endl;
        }
        else
        {
            cout<<"YES"<<endl;
        }
    }
}

