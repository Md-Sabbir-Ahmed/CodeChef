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
        int A,B;
        cin>>A>>B;
        if(A<B)
        {
            cout<<"<"<<"\n";
        }
        else if(A>B)
        {
            cout<<">"<<"\n";
        }
        else if(A==B)
        {
            cout<<"="<<"\n";
        }
    }
    return 0;
}


