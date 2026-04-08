#include<bits/stdc++.h>
#include<cmath>
using namespace std;

int a,i;
void solve(){
    cin>>a>>i;   
    if (i%100==0)
    {
        cout<<(a*i);
    }else{
        cout<<(a*(i-1))+1;
    }
    
    
}

int main() {
    ios :: sync_with_stdio(0);
    cin.tie(0);
    
    int t=1;
    while(t--) {
        solve();
    }

}    