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
        ll flg=0;
        string s;
        cin>>s;
        if(s[0]=='A' && s[s.size()-1]=='B')
        {
            int a=0;
            int b=0;
            for(ll i=0; i<s.size(); i++)
            {
                if(s[i]=='A')
                {
                    a++;
                }
                else
                {
                    b++;
                }
                if(a<b)
                {
                    flg=1;
                }
            }
            if(flg==1)
            {
                cout<<"NO"<<endl;
            }
            else
            {
                cout<<"YES"<<endl;
            }
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
}

