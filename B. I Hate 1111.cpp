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
        cin>>n;
        ll flg=0;
        while(1)
        {
            if(n%11==0 || n%111==0)
            {
                flg=1;
                cout<<"YES"<<endl;
                break;
            }
            else if(n<=0)
            {
                break;
            }
            n=n-11;
        }
        if(flg==0)
        {
            cout<<"NO"<<endl;
        }
    }
}

