#include<bits/stdc++.h>
using namespace std;
int val(char c){
    if(c >= '2' && c <= '9') return c - '0';
    else return 10; // T,J,K,Q,A
}
int j=1;
void solve(){
    vector<string> cards(52);
    int n=3,y=0,i=27;
    for (int  i = 0; i < 52; i++) cin>>cards[i];
    while (n--)
    {
        int x=val(cards[i][0]);
        y+=x;
        i-=(11-x);
    }
    int z=27-i;
    cout<<"Case "<<j<<": "<<cards[y+z-1]<<"\n";
    j++;
}
int main(){
    ios :: sync_with_stdio(0);
    cin.tie(0);
            
    int t; 
    cin>>t;
    while(t--) {
        solve();
    }

}    

