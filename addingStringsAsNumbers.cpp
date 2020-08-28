

#include <bits/stdc++.h>
#include <string>
using namespace std;
    
int main()
{
    int t;
    cin>>t;
    while(t--){
        string str1,str2;
        cin>>str1>>str2;
        
        if (str1.length()> str2.length()){
            swap(str1,str2);
        }
        int l1 = str1.length(), l2 = str2.length();

        //reversing strings
        reverse(str1.begin(), str1.end());
        reverse(str2.begin(), str2.end());

        //Addition

        int carry = 0;
        string result;
        for (int i = 0; i < l1; ++i){

            int sum = (str1[i] - '0') + (str2[i] - '0') + carry;
            result.push_back(sum%10 + '0');
            carry = sum/10;
        }

        for (int i = l1; i < l2; ++i){
            int sum = (str2[i] - '0') + carry;
            result.push_back(sum%10 + '0');
            carry = sum/10;
        }

        if (carry){
            result.push_back(carry + '0');
        }

        reverse(result.begin(), result.end()); 
        cout<<result<<endl;            
        
    }
    return 0;

    // int t;
    // cin>>t;
    // while(t--){
    //     int n;
    //     cin>>n;
    //     char str[n];
    //     cin>>str;
    //     int countA=0, countD=0;
    //     // string a="A", d="D";
    //     for(int i=0; i<n; i++){
    //       if(str[i]==49){
    //         countA++;
    //       }
    //       else if(str[i]==53){
    //         countD++;
    //       }
          
    //     }
    //     if(countA>countD){
    //       cout<<"Aditya"<<endl;
    //     }
    //     else if(countA<countD){
    //       cout<<"Danish";
    //     }
    //     else{
    //       cout<<"AdiDan";
    //     }
        
    // }
    // return 0;
}