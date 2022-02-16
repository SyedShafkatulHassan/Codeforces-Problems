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
        ll n;
        vector<ll>v;
        cin>>n;
        ll ans=n;
        for(ll i=2; i<=sqrt(n); i++)
        {
            if(ans%i==0)
            {
                v.pb(i);
                v.pb(n/i);
            }
        }
        ll d1=1;
        ll d2=1;
        ll d3=1;
        if(v.size()==0)
        {
            cout<<"NO"<<endl;
            continue;
        }
        sort(v.begin(),v.end());
        ll l=0;
        ll flt=0;
        while(1)
        {
            if(v.size()==l)
            {
                break;
            }
            l++;
            d1=v[0];
            ll flg=0;
            d2=v[l+1];
            ll w=1;
            if(d1!=d2)
            {
                for(ll i=0; i<v.size(); i++)
                {
                    //cout<<v[i]<<endl;
                    //cout<<d2<<endl;
                    if(d1*d2*v[i]==ans)
                    {
                        flg=1;
                        w=v[i];
                        break;
                    }
                }
                if(flg==1 && (d1!=w) && (d2!=w))
                {
                    flt=1;
                    cout<<"YES"<<endl;
                    cout<<d1<<" "<<d2<<" "<<w<<endl;
                    break;
                }

            }
            else
            {
                d2=v[l+1];
            }
        }
        if(flt==0)
        {
            cout<<"NO"<<endl;
        }
    }
}

