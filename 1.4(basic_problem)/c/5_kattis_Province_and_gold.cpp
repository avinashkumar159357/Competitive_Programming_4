#include<bits/stdc++.h>
using namespace std;

void solve(){
    int g, s, c; 
    cin >> g >> s >> c;

    int total = g*3 + s*2 + c;

    string victory = "";
    string treasure = "";

    // decide best victory card
    if (total >= 8) victory = "Province";
    else if (total >= 5) victory = "Duchy";
    else if (total >= 2) victory = "Estate";

    // decide best treasure card
    if (total >= 6) treasure = "Gold";
    else if (total >= 3) treasure = "Silver";
    else treasure = "Copper";

    // output
    if (victory == "") 
        cout << treasure;
    else 
        cout << victory << " or " << treasure;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    solve();
}