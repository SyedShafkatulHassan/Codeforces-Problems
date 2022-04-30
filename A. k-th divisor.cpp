//Bismillahir Rahmanir Rahim
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define in inset
#define all(x) (x).begin(),(x).end()
int main()
{
    ll a,b;
    cin>>a>>b;
    vector<ll>v;
    for(ll i=1; i<=sqrt(a); i++)
    {
        if(a%i==0)
        {
            v.pb(i);
            if(i*i<a)
            {
                v.pb(a/i);
            }
        }
    }
    sort(all(v));
    if(v.size()<b)
    {
        cout<<-1<<endl;
    }
    else
    {
        cout<<v[b-1]<<endl;
    }

}
