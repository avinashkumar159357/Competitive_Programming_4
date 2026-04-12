#include<bits/stdc++.h>
using namespace std;

void solve(){
    int x,y; cin>>x>>y;
    if (x>0 && y>0) cout<<"1";
    else if(x<0 && y>0) cout<<"2";
    else if(x<0 && y<0) cout<<"3";
    else cout<<"4";
}

int main() {
    ios :: sync_with_stdio(0);
    cin.tie(0);
    
    int t=1;// cin>>t;
    while(t--) {
        solve();
    }
}