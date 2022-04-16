//Bismillahir Rahmanir Rahim
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define all(x) (x).begin(),(x).end()
int main()
{
    ll pp;
    cin>>pp;
    while(pp--)
    {vector<ll>v;
        ll tc,xx;
        cin>>tc>>xx;
        for(int p=0; p<tc; p++)
        {
            ll a;
            cin>>a;
            v.pb(a);
        }
        sort(v.begin(),v.end());
        ll dans=0;
        for(ll i=0; i<tc; i++)
        {
            if(v[i]==-1)
            {
                continue;
            }
            auto it=lower_bound(all(v),xx*v[i]);
            if(*it==v[i]*xx && it != v.end())
            {
                *it = v[i] = -1;
            }
            else
            {
                dans++;
            }
        }
        cout<<dans<<endl;
    }
}


