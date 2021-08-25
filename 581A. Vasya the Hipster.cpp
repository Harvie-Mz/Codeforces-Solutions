#include<bits/stdc++.h>
#define ll long long 
#include <vector>
#define pb                  push_back
#define fr(i,n)             for (ll i=0;i<n;i++)
#define fr1(i,n)            for(ll i=1;i<=n;i++)
using namespace std;
const int h= 2e5+5;
int arr[h];
int main() {
ll n,m; cin >>n>>m;
int mx=max(n,m);
int mn=min(n,m);
cout <<mn<<" "<<(mx-mn)/2;
}
