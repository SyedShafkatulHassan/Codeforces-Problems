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
        ll a,k,cnt=0,flg=0,tplin=0,kk=1;
        string v;
        cin>>a>>k;
        cin>>v;
        for(ll i=0; i<a;)
        {
            tplin=k;
            flg=0;
            if(v[i]=='0')
            {
                kk=1;
                for(ll j=i+1; j<(k+i+1); j++)
                {
                    if(j>=a)
                    {
                        break;
                    }
                    if(v[j]=='1')
                    {
                        kk=j;
                        flg=1;
                        break;
                    }
                }
                for(ll j=i-1;; j--)
                {
                    if(tplin==0 || j<=-1)
                    {
                        break;
                    }
                    tplin--;
                    if(v[j]=='1')
                    {
                        kk=min(j,kk);
                        flg=1;
                        break;
                    }
                }
                if(flg==0)
                {
                    cnt++;
                    i=i+k+1;
                }
                else
                {
                    i=kk;
                }

            }
            else
            {
                i=k+i+1;
            }
        }

        cout<<cnt<<endl;
    }
}
