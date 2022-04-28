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
        string s;
        cin>>s;
        ll a=1;
        ll b=0;
        ll flg=-1;;
        for(ll i=0; i<s.size(); i++)
        {
            if(s[i]==s[i+1])
            {
                a++;//cout<<s[i]<<endl;
            }
            else
            {
                if(a<=1)
                {
                    flg=1;
                }
                a=1;
            }
        }
        if(flg==1 || s.size()==1)
        {
            cout<<"NO"<<endl;
        }
        else if(flg==-1)
        {
            cout<<"YES"<<endl;
        }
    }
}

