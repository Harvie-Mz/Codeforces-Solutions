  
#include<bits/stdc++.h>
#include <string.h>
using namespace std;
bool printed[1000];
int sol[1000],ar[2000];
int main (){
int a;
cin >>a;

for ( int i=1 ; i <=a; i++){
	cin>>ar[i];
}
int siz=0;
for (int i=a ; i >= 1; i--){
	if (printed[ar[i]]==true)
	continue;

	 sol [siz] = ar[i];
	 siz++;
	 printed[ar[i]] = true;
} 
cout << siz<<"\n";
for (int i=siz-1 ; i >= 0 ; i--)
{
	cout << sol[i]<<" ";
}
 

}
