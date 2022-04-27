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
        ll n;
        cin>>n;
        ll sum=0;
        for(ll i=0;i<n;i++)
        {
           ll a;
           cin>>a;
           sum=sum+a;
        }
        sum=sum-n;
        if(sum%2==1)
        {
            cout<<"errorgorn"<<endl;
        }
        else
        {
            cout<<"maomao90"<<endl;
        }
    }
}

