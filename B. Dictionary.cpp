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
        string s;
        cin>>s;
        ll ans=1;
        ll j=0;
        string s1;
        ll d=1;
        ll e=0;
        for(char i='a';i<='z';i++)
        {
            if(i==s[0])
            {
                for(ll j='a';j<='z';j++)
                {
                   if(s[1]==j && j>s[0])
                   {
                       ans=(j-97)+ans-1;
                   }
                   else if(s[1]==j && j<s[0])
                   {
                       ans=(j-97)+ans;
                   }
                }
                break;
            }
            ans=25+ans;
        }
        cout<<ans<<endl;
    }
}

