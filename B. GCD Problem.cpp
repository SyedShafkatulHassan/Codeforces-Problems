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
        ll d=0;
        cin>>n;
        if(n%2==1)
        {
            d=(n-1)/2;
            if(d%2==0)
            {
                cout<<d+1<<" "<<d-1<<" "<<"1"<<endl;
            }
            else
            {
                cout<<d+2<<" "<<d-2<<" "<<"1"<<endl;
            }
        }
        else
        {
            cout<<"2"<<" "<<n-3<<" "<<"1"<<endl;
        }
    }
}




