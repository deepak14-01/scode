/*Let's take a simple problem. We all know what are vowels and consonants. Your task is pretty simple, given a string 
S
, count number of vowels and consonants present in the string.

Input format
The first line contains an integer 
T
, denoting the number of test cases.
Each test case consists of a string 
S
 containing only uppercase characters.

Output format
For each test case on a new line, print vowel count and consonant count separated by a space.*/


#include <bits/stdc++.h>
using namespace std;
    
int main()
{
    int n;
    cin>>n;
    char str[n];
    cin>>str;
    
    for(i=0;i<n;i++)
    {   
        if((str[i]=='a')||(str[i]=='e')||(str[i]=='i')||(str[i]=='o')||(str[i]=='u'))
        {
            cout<<"vowel:"<<str[i]<<endl;
        } else
        {
            cout<<"cosonents:"<<str[i]<<endl;
        }
    }
    return 0;
}
