//Author:Syed Shafkatul Hassan
//Date:2/11/2023
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
    for(ll p=0; p<tc; p++)
    {
        ll n;
        cin>>n;
        string s;
        cin>>s;
        ll right=0,up=0;
        ll flg=0;
        for(int i=0; i<s.size(); i++)
        {
            if(s[i]=='R')
            {
                right++;
            }
            else if(s[i]=='L')
            {
                right--;
            }
            else if(s[i]=='U')
            {
                up++;
            }
            else if(s[i]=='D')
            {
                up--;
            }
            if(up==1 && right==1)
            {
                flg=1;
                cout<<"YES"<<endl;
                break;
            }
        }
        if(flg==0)
        {
            cout<<"NO"<<endl;
        }
    }
}

