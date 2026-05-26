//Problem name:Relational Operator
//Author:Avinash kumar (A_K_0_7)
//Email Address: aviofficial159357@gmail.com
//Problem ID:Uva 11172
//Description:Multiple test cases + selection
//Last Changed:26-5-2026
#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define fastio ios::sync_with_stdio(0); cin.tie(0);

void solve() {
    ll a,b; cin>>a>>b;

    if(a==b)cout<<"=\n";
    else if(a<b) cout<<"<\n";
    else cout<<">\n";
    
}

int main() {
    fastio;

    int TC;  cin >> TC;
    while (TC--) {
        solve();
    }
}