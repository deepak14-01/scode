/*


Valid Strings
Arnab loves brackets and any valid sequence of brackets. 
On his birthday, he expected a valid sequence of brackets from his friends.
He is upset because some of his friends deliberately gifted him an invalid sequence.
Now, Arnab decided to fix the sequence himself by moving only one of the brackets in the sequence.

A bracket sequence (S) is valid only if:
1. S is empty
2. S is equal to "(t)", where t is a valid sequence
3. S is equal to "(t1 t2)" ie. concatenation of t1 and t2, where t1 and t2 are valid sequences.

Arnab, being a lazy person wants you to check if the sequence can be made valid by moving just one bracket (if required).

Input format
First-line contains an integer 
T
 where 
T
 is the number of test cases.
The next 
T
 lines contain a String 
S
 denoting the sequence.

Output format
For each test case on a new line, print Yes or No depending on whether it is possible or not to convert the string into a valid string. 

Constraints:
1
<=
T
<=
70

1
<=
|
S
|
<=
10
5
 ​, where
|
S
|
￼ denotes the length of the string

Time Limit
1
 ​secon

Example
Input
1
)(

Output
Yes
*/

#include <bits/stdc++.h>
using namespace std;
    
int main()
{
    int t;
    cin>>t;
    while(t--){
        int count=0, flag=0;
        string str;
        cin>>str;
        
        for(int i=0;i<str.length();++i){
            if (str[i]=='(') count++;

            else count--;

            if (count==-2) {
            	flag=1;
            	break;}
        }

        if (flag==1) cout<<"No"<<endl;

        else cout<<"Yes"<<endl;
    }
    
    return 0;
}