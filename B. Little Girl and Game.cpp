//Bismillahir Rahmanir Rahim
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
int main()
{
    map<char,int>mp;
    string s;
    cin>>s;
    ll hi=0;
    ll a=0;
    for(int i=0; i<s.size(); i++)
    {
        mp[s[i]]++;
    }
    for(auto u:mp)
    {
        if(u.second%2==0)
        {

        }
        else
        {
            hi++;
            a++;
        }
    }
    if(a%2==1 || a==0 )
    {
        cout<<"First"<<endl;
    }
    else
    {
        cout<<"Second"<<endl;
    }
}

