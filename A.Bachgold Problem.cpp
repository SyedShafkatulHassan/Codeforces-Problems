//Bismillahir Rahmanir Rahim
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define all(x) (x).begin(),(x).end()
#define in insert
int main()
{
    ll n;
    cin>>n;
    if(n%2==0)
    {
        cout<<n/2<<endl;
        for(ll i=0; i<n/2; i++)
        {
            cout<<2<<" ";
        }
        cout<<endl;
    }
    else if(n%2==1)
    {
        cout<<n/2<<endl;
        for(ll i=0; i<(n/2)-1; i++)
        {
            cout<<2<<" ";
        }
        cout<<3<<endl;
    }
}

