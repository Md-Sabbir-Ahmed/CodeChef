#include<iostream>
using namespace std;
int main()
{
    int n,k,a=0;
    long t;
    cin>>n>>k;
    for(int i=0;i<n;i++)
    {
        cin>>t;
        if(t%k==0)
        {
            a++;
        }
    }
    cout<<a<<endl;
    return 0;
}
