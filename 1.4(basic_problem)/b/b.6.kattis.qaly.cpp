#include<bits/stdc++.h>
#include<cmath>
using namespace std;

void solve(){
    float q,y,sum=0;
    int n;
    cin>>n;
    for (int  i = 0; i < n; i++)
    {
        cin>>q>>y;
        sum+=q*y;
    }
    cout<<(sum*1000)/1000;
}

int main() {
    ios :: sync_with_stdio(0);
    cin.tie(0);
    
    int t=1;
    while(t--) {
        solve();
    }

}    


