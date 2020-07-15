#include <bits/stdc++.h>
  using namespace std;
  
  int main()
  {
    //write your code here
    int t;
    cin>>t;
    while(t--){
      int n;
      cin>>n;
      int arr[n];
      for(int i=0;i<n;++i){
        cin>>arr[i];
      }
      int large = arr[n-1];
      cout<<large<<" ";
      for(int i=n-2; i>=0; --i){
        if (arr[i]>=large){
          large = arr[i];
          cout<<large<<" ";
          
        }
      }
      cout<<endl;
    }
    return 0;
  }