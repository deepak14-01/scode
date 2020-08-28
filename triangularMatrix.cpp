#include <iostream>
  using namespace std;
  
  int main()
  {
    //write your code here
    int t;
    cin>>t;
    while(t--){
      int m,n;
      cin>>m>>n;
      int arr[m][n];
      for(int i=0;i<m;++i){
          for(int j=0;j<n; ++j){
               cin>>arr[i][j];
          }       
      }
			// 1 0 0 0 0
			// 1 2 0 0 0
			// 1 2 3 0 0
			// 1 2 3 4 0
      
			for(int i=0;i<m;++i){
          for(int j=0;j<=i; ++j){
               cout<<arr[i][j]<<" ";
          }
					for (int k = 0; k < n-i-1; k++)
					{
						cout<<"0 ";
					}
					cout<<endl;
					       
      }
    }
    return 0;
  }