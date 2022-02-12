//Bismillahir Rahmanir Rahim
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
int main()
{
    ll n,m;
    cin>>n>>m;
    if(m==1)
    {
        cout<<n*(n-1)/2<<" ";
        cout<<n*(n-1)/2<<endl;
    }
    else
    {
        ll mx=0;
        mx=n-(m-1);
        mx=(mx*(mx-1))/2;
        ll a=n/m;
        ll b=n%m;
        ll mn=((m-b)*(a*(a-1))/2);
        ll d=0;
        d=b;
        ll othermn=d*(((a+1)*a)/2);
        cout<<mn+othermn<<" "<<mx<<endl;;
    }

}


