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
        ll l,r,k;
        cin>>l>>r>>k;
        ll ans=0;
        if(l==1 && r==1)
        {
            cout<<"NO"<<endl;
        }
        else if(l==r)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            if((r-l+1)%2==0)
            {
                ans=(r-l+1)/2;
            }
            else if(l%2==0)
            {
                ans=(r-l+1)/2;
            }
            else
            {
                ans=((r-l+1)/2)+1;
            }
            if(ans<=k)
            {
                cout<<"YES"<<endl;
            }
            else
            {
                cout<<"NO"<<endl;
            }
        }
    }

}

