#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--)
	{
		int n, arr[n];
		cin >> n;
		for(int i = 1; i <= n; i++) cin >> arr[i];
		int inf[n] = {0};
		for (int i = 0; i < n; ++i)
		{
			int c=arr[i];
			for (int j = i+1; i < n; ++i)
			{
				int x = arr[j];
				int d = abs(c-x);
				if (d<=2) {
					cout<<d<<"\n";
					// inf[i]++;
				}
			}
		}
		// for (int i = 0; i < n; ++i)
		// {
		// 	cout<<inf[i]<<"\n";
		// }
		// int min = *min_element(inf, inf + n);
		// int max = *max_element(inf, inf + n);
		// cout << min << " ";
		// cout << max;
		// if (min>1) cout << min << " ";
		// else cout << "1 ";
		// if (max>1) cout << max;
		// else cout << "1";






 	}	
	return 0;
}