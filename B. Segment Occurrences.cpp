//Bismillahir Rahmanir Rahim
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
int main()
{
    ll n,k,a;
    cin>>n>>k>>a;
    string s;
    cin>>s;
    string s1;
    cin>>s1;
    vector<ll>v;
    vector<ll>v1;
    for(ll i=0; i<n; i++)
    {
        ll flg=0;
        ll d=0;
        if(s[i]==s1[0])
        {
            d=i;
            ll j=i;
            for(ll l=1; l<k; l++)
            {
                j++;
                if(s[j]==s1[l])
                {
                    continue;
                }
                else
                {
                    flg=1;
                    break;
                }
            }
            if(flg==1)
            {

            }
            else
            {
                v.pb(d);
                v1.pb(d+k-1);
            }
        }
    }
    while(a--)
    {
        ll a1,a2;
        cin>>a1>>a2;
        int ans=0;
        for(ll i=0;i<v.size();i++)
        {
           if(v[i]>=a1-1 && v1[i]<=a2-1)
           {
               ans++;
           }
        }
        cout<<ans<<endl;
    }
}

