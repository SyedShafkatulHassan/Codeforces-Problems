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
        if(n>=1900)
        {
            cout<<"Division 1"<<endl;
        }
        else if(n>=1600)
        {
            cout<<"Division 2"<<endl;
        }
        else if(n>=1400)
        {
            cout<<"Division 3"<<endl;
        }
        else
        {
            cout<<"Division 4"<<endl;
        }
    }
}

