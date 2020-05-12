#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int N;
    cin>>N;
    if(N%4==0)
    {
        cout<<N+1;
    }
    else{
        cout<<N-1;
    }
    return 0;
}


