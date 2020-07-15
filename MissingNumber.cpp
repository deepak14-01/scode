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
      for(int i=0;i<n-1;++i){
        cin>>arr[i];
      }
      arr[n-1]=0;
      int sum=0;
      int count = 1;
      for(int i=0; i<n; ++i){
        sum = sum + count - arr[i];
        count++;
      }
      cout<<sum<<endl;
    }
    return 0;
  }