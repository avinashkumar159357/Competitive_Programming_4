//Problem name:Oddities
//Author:Avinash kumar (A_K_0_7)
//Email Address: aviofficial159357@gmail.com
//Problem ID:**
//Description:Multiple test cases + selection
//Last Changed:26-5-2026
#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define fastio ios::sync_with_stdio(0); cin.tie(0);

void solve() {
    int x; cin>>x;

    if(abs(x)%2==0) cout<<x<<" is even\n";
    else cout<<x<<" is odd\n";
    
}

int main() {
    fastio;

    int TC;  cin >> TC;
    while (TC--) {
        solve();
    }
}