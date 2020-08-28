/*

Duplicate Character
Tina is given a string 
S
 which contains the first letter of all the student names in her class. She got a curiosity to check how many people have their names starting from the same alphabet. So given a string 
S
, she decided to write a code that finds out the count of characters that occur more than once in the string.

Input format
The first line contains an integer 
T
, denoting the number of test cases.
Each test case consists of a string 
S
 containing only lowercase characters.

Output format
For each test case on a new line, print the output in the format character=count. If multiple characters have more than one count, print all of them separated by space, in alphabetical order.
In case no such character is present print 
−
1
.

Constraints
1
<=
T
<=
7

1
<=
|
S
|
<=
10
7
, where 
|
S
|
 denotes length of string 
S
.

Time limit
1
 second

Example
Input
3

prepbytes
java
algorithm

Output
e
=
2
 
p
=
2

a
=
2

−
1
*/



#include <bits/stdc++.h>
using namespace std;
    
int main()
{
    int t;
    cin>>t;
    while(t--){
        string str;
        cin>>str;
        int freq[26]={0};
        
        for(int i=0;i<str.length();++i){
            freq[str[i]-97]++;
        }


        int flag=0;
        for (int i = 0; i < 26; ++i){
        	if (freq[i]>1){
        		cout<<char(i+97)<<"="<<freq[i]<<" ";
        		flag=1;
        	}
		}

		if (flag==0) cout<<-1;
        
        cout<<endl;        
    }
    return 0;
}