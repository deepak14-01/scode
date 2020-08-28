/* Algorithm
1 create a array[26] to store frequency of alphabets
2 traverse through input string and increment frequency array[i] for every alphabet array
   for example if 'a' is traversed, increment freq[i] with one
3 traverse through input array again and check for the first alphabet which appaers in 
input array which has freq[] value one.
4 return that alphabet */

#include <bits/stdc++.h>
using namespace std;
    
int main()
{
    int t;
    cin>>t;
    while(t--){
    	int freq[26] = {0};
        string str;
        cin>>str;
        
        for(int i=0;i<str.length();++i){
            freq[str[i] - 97]++;
        }

        int flag=0;
        for (int i = 0; i < str.length(); ++i)
        {
        	if (freq[str[i]-97]==1)
        	{
        		flag=1;
        		cout<<str[i]<<endl;
        		break;
        		
        	}
        }
        if (flag==0)
        {
        	cout<<-1<<endl;
        }
        
    }
    return 0;
}