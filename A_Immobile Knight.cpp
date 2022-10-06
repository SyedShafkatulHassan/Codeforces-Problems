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
        ll row,colum;
        cin>>row>>colum;
        if(row==1 || colum==1)
        {
            cout<<1<<" "<<1<<endl;
        }
        else if(row==2 && colum==2)
        {
            cout<<1<<" "<<1<<endl;
        }
        else if(row==2 && colum==3)
        {
            cout<<2<<" "<<2<<endl;
        }
        else if(row==3 && colum==2)
        {
            cout<<2<<" "<<2<<endl;
        }
        else if(row==3 && colum==3)
        {
            cout<<2<<" "<<2<<endl;
        }
        else
        {
            cout<<1<<" "<<1<<endl;
        }
    }
}
