
#include<bits/stdc++.h>
#include <string.h>
using namespace std;
const int n=3005;
bool f[n][n];
int x[3005] , y[3005];
int main() {
    int a,b,c,d,cnt=0;
    cin>>a;
    for (int i=1 ; i<=a; i ++)
    {
        cin>>x[i] >>y[i];
        f[x[i]+1000][y[i]+1000]=true;

    }
    for (int i=1 ; i<=a; i ++){
        for (int j=i+1 ; j<=a; j ++){
            if ((x[i]+x[j])%2 !=0 || (y[i]+y[j])%2!=0)
                continue;
            b=(x[i]+x[j])/2;
            c=(y[i]+y[j])/2;
            if (f[b+1000][c+1000])
                cnt++;
        }
    }
    cout << cnt<<endl;
    return 0;
}
