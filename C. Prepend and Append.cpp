//Bismillahir Rahmanir Rahim
//Author:Syed Shafkatul Hassan
//Date:2/10/2023
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
      ll x=0;
      ll point=s.size()-1;
      ll cnt=0;
      while(x<point)
      {
          if(s[x]!=s[point])
          {
              cnt=cnt+2;
          }
          else
          {
              break;
          }
          x++,point--;
      }
      cout<<"Ans:"<<n-cnt<<endl;
    }
}

