//Bismillahir Rahmanir Rahim
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
int main()
{
    ll a;
    cin>>a;
    vector<ll>v;
    for(ll i=0; i<a; i++)
    {
        ll an;
        cin>>an;
        v.pb(an);
    }
    ll first =0,second=0,flg=0;
    ll arr[100000];
    ll t=0;
    for(ll i=0; i<a; i++)
    {
        if(v[i]>v[i+1])
        {
            first=i;
            while(1)
            {
                if(i>=a-1)
                {
                    break;
                }
                if(v[i]<v[i+1])
                {
                    break;
                }
                i++;
                t=1;
            }

            second=i;

            break;
        }
    }
    reverse(v.begin()+first, v.end()-(v.size()-1-second));
    vector<ll>att;
    for(ll i=0; i<a; i++)
    {
        att.pb(v[i]);
    }
    sort(att.begin(),att.end());
    for(ll i=0; i<a; i++)
    {
        if(v[i]==att[i])
        {

        }
        else
        {
            flg=1;
        }
    }
    if(flg==1)
    {
        cout<<"no"<<endl;
    }
    else
    {
        cout<<"yes"<<endl;

        cout<<first+1<<" "<<second+1<<endl;

    }
}


