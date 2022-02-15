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
        int mx=0;
        ll a,b,m=0,ans=1;
        cin>>a>>b;
        if(b>=a)
        {
            cout<<1<<endl;
        }
        else
        {
            for(ll i=1; i<=sqrt(a); i++)
            {
                if(a%i==0)
                {
                    if(i<=b)
                    {
                        ans=max(ans,i);
                    }
                    if(a/i<=b)
                    {
                        ans=max(ans,a/i);
                    }
                }
            }
            cout<<a/ans<<endl;
        }
    }
}
