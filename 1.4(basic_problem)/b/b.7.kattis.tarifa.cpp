#include<bits/stdc++.h>
#include<cmath>
using namespace std;

void solve(){
    int p,n,sum=0;
    int x;
    cin>>x;
    cin>>n;
    for (int  i = 0; i < n; i++)
    {
        cin>>p;
        sum+=p;
    }
    cout<<((x*n)-sum)+x;
}

int main() {
    ios :: sync_with_stdio(0);
    cin.tie(0);
    
    int t=1;
    while(t--) {
        solve();
    }

}    


