#include<bits/stdc++.h>
#include<cmath>
using namespace std;

void solve(){
    int l, r;
    cin>>l>>r;
    if (l==0 && r==0)
    {
        cout<<"Not a moose"; 
    }else if(l==r)
    {
        cout<<"Even "<<2*l;
    }else if (l!=r)
    {
        cout<<"Odd "<<2*max(l,r);
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


