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
        vector<ll>v;
        cin>>a;
        if(a%2==0)
        {
            cout<<a/2<<" "<<a/2<<endl;
        }
        else
        {
            //cout<<a*b/__gcd(a,b)<<endl;
            for(ll i=2; i<=sqrt(a); i++)
            {
                if(a%i==0)
                {
                    v.pb(i);
                    v.pb(a/i);
                }
            }
            if(v.size()==0)
            {
                cout<<1<<" "<<a-1<<endl;
            }
            else
            {
                sort(v.begin(),v.end());
                cout<<v[v.size()-1]<<" "<<a-v[v.size()-1]<<endl;
            }
        }
    }
}

