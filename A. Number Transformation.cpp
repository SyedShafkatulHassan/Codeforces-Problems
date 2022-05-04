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
    for(int p=0; p<tc; p++)
    {
        ll x,y;
        cin>>x>>y;
        if(x>y)
        {
            cout<<0<<" "<<0<<endl;
        }
        else
        {
            if(y%x==0)
            {
                cout<<1<<" "<<(y/x)<<endl;
            }
            else
            {
                cout<<0<<" "<<0<<endl;
            }
        }
    }
}

