#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int T;
    cin>>T;
    while(T--)
    {
        int N;
        cin>>N;
        if(N==2010 || N==2015 || N==2016 || N==2017||N==2019)
        {
            cout<<"HOSTED"<<"\n";
        }
        else{
            cout<<"NOT HOSTED"<<"\n";
        }
    }

    return 0;
}


