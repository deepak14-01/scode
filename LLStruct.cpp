#include<bits/stdc++.h>
using namespace std;
int main() {
	int n,j,h;
	double i;
	int hr,min;
	cin>>hr;
	cin>>min;
start:;
  for(h=hr;h<24;h++)
  {
	for(j=min;j<60;j++) {
	for(int k=0;k<60;k++) {
		system("cls");
		cout<<"\n \n \n \t \t \t"<<h<<" hr : "<<j<<" min : "<<k<<" sec";	
		if(h>=12) {
			h = h-12;
		}
		for(i=0;i<89999900;i++) {
			i++;
			i--;
		}
	
	}
}
}
goto start;
return 0;
}