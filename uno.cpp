
/*
At the start of the game, there is one card on the table and all the players have five cards in their hand. A player can play a card from her/his hand if and only if it has the same rank or the same suit as the card on the table.
It is PrepBuddy's turn, there is a card on the table and five cards in her hand. Can you find out if she can play atleast one card?
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
        string cards;
        int flag=0;

        for (int i = 0; i < 5; i++)
        {
            cin>>cards;
            if (str[0]==cards[0] || str[1]==cards[1]){
                flag=1;
                break;
            }
            cards.clear();
        }

        if (flag==1)
        {
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    
}
return 0;}