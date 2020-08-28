#include <bits/stdc++.h>
using namespace std;
  
  int main()
  {
    //write your code here
    int t;
    cin>>t;
    
    while(t--){
      
      int n,k;
      cin >> n>>k;
      int arr[n];
      
      for (int i = 0; i < n ; ++i){
        cin>>arr[i];
      }

      int sum = 0,max = 0;

      for (int i = 0; i < k; ++i){
        for (int j = i; j < n; j = j + k){
          sum += arr[j];
        }

        if (sum>max){
            max = sum;
            sum = 0;
          }
      }

      cout<<max<<endl;   
  }
  return 0;
}