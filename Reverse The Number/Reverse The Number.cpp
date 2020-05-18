#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t,n,temp,r,sum=0;
    cin>>t;
    while(t--)
    {
        cin>>n;
        temp=n;
        while(temp!=0)
        {
            r=temp%10;
            sum=sum*10+r;
            temp=temp/10;
        }
        cout<<sum<<"\n";
        sum=0;
    }

    return 0;
}
