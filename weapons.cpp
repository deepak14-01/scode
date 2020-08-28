#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        long n;
        cin>>n;
        string s[n];
        for(long i=0;i<n;i++) cin>>s[i];

        long ans=0;
        for(int j=0;j<10;j++)
        {
            long temp=0;
            for(long i=0;i<n;i++)
            {
                temp=temp+s[i][j]-'0';
            }
            if(temp%2)
                ans++;
        }
        cout<<ans<<"\n";
    }
    return 0;
}