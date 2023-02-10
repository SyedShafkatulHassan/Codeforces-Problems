//Bismillahir Rahmanir Rahim
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define all(x) (x).begin(),(x).end()
#define in insert
int main()
{
    ll tc;
    cin>>tc;
    for(ll p=0; p<tc; p++)
    {
        ll n;
        cin>>n;
        vector<ll>v;
        for(ll i=0; i<n; i++)
        {
            ll a;
            cin>>a;
            v.pb(a);
        }
        sort(v.begin(),v.end());
        ll cnt=0;
        ll total=0;
        for(ll i=0; i<n; i++)
        {
            //cout<<v[i]<<" ";
            if(v[i]==1)
            {
                cnt++;
            }
            else
            {
                break;
            }
        }
        if(cnt==1)
        {
            cout<<n<<endl;
        }
        else
        {
            if(cnt%2==1)
            {
                total=cnt/2;
                cout<<1+total+(n-cnt)<<endl;
            }
            else
            {
                total=cnt/2;
                //cout<<"total : "<<total<<endl;
                cout<<total+(n-cnt)<<endl;
            }
        }
    }
}
