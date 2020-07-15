#include <bits/stdc++.h>
  using namespace std;
  
  int main()
  {
    //write your code here
    int t;
    cin>>t;
    
    while(t--){
      
      int n, k;
      cin >> n >>k;
      int arr[n];
      
      
      for (int i = 0; i < n ; ++i){
        cin >> arr[i];
      }

			int trim_end[n];
			int f = 0;
			for (int i = n-k; i < n ; ++i){
				trim_end[f++] = arr[i];
      }

			// for (int i = 0; i < k ; ++i){
      //   cout<<trim_end[i]<<endl;
      // }  
			int m = 0;
			for (int i = k; i < n; i++)
			{
				trim_end[i] = arr[m++];
			}    

			for (int i = 0; i < n ; ++i){
        cout<<trim_end[i]<<" ";
      }  
    }
    return 0;
  }