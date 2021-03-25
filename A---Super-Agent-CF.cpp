#include<bits/stdc++.h>
#include <string.h>
using namespace std;
int main (){
const int a=2000;
char ar[a];
int i=0;
for (int i=1 ; i <= 9; i++)
{
	cin >> ar[i];

}
	if (ar[2]==ar[8]&& ar[4]==ar[6] && ar[1]==ar[9] && ar[3]==ar[7])
	cout <<"YES\n";
	else 
	cout << "NO \n";



}
