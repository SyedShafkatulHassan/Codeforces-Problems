#include<bits/stdc++.h>
#define ll long long int
#define pb push_back
using namespace std;
int main()
{
    ll tc;
    cin>>tc;
    for(int p=0; p<tc; p++)
    {
        ll a=0,b=0,c=0;
        string s;
        cin>>s;
        for(ll i=0; i<s.size(); i++)
        {
            if(s[i]=='A')
            {
                a++;
            }
            else if(s[i]=='B')
            {
                b++;
            }
            else
            {
                c++;
            }
        }
        if(a+c==b)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }

}
