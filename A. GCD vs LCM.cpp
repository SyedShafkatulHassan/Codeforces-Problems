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
        ll x,y,z,l;
        ll n;
        cin>>n;
        if(n%2==0)
        {
            n=n-2;
            cout<<n-1<<" "<<1<<" ";
            cout<<1<<" "<<1<<endl;
            /*if(n%2==0){
                cout<<n<<" "<<n<<" ";
                cout<<1<<" "<<1<<endl;
            }
            else
            {

                cout<<n-1<<" "<<n+1<<" ";
                cout<<1<<" "<<1<<endl;
            }*/
        }
        else
        {
            n=n-2;
            n=n/2;
            cout<<n<<" "<<n+1<<" ";
            cout<<1<<" "<<1<<endl;
        }
    }
}

