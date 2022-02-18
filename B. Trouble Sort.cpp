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
        ll a;
        cin>>a;
        vector<ll>v;
        vector<ll>v1;
        vector<ll>v2;
        for(ll i=0; i<a; i++)
        {
            ll d;
            cin>>d;
            v.pb(d);
            v2.pb(d);
        }
        ll o=0;
        for(ll i=0; i<a; i++)
        {
            ll d;
            cin>>d;
            v1.pb(d);
            if(v1[i]==1)
            {
                o++;
            }
        }
        ll flg=0;
        if(o==a || o==0
          )
        {
            sort(v.begin(),v.end());
            for(ll i=0; i<a; i++)
            {
                if(v[i]!=v2[i])
                {
                    flg=1;
                    cout<<"NO"<<endl;
                    break;
                }
            }
            if(flg==0)
            {
                cout<<"YES"<<endl;
            }
        }
        else
        {
            cout<<"YES"<<endl;
        }
    }
}

