#include <bits/stdc++.h>
using namespace std;
    
int main()
{
    int t;
    cin>>t;
    while(t--){
        string str;
        string fake;
        cin>>str;
        cin>>fake;
        reverse(sstr.end() -2, str.end());
        reverse(str.begin(), str.end()-2);
        reverse(str.begin(), str.end());

        if(str==fake){
            cout<<"Yes";
        }
        else{
            cout<<"No";
        }
        
    }
    return 0;
}