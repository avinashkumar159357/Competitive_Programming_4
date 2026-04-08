#include<bits/stdc++.h>
#include<cmath>
using namespace std;

void solve(){
    int d;
    string m;
    cin>>m>>d;
    if (m=="OCT" && d==31 || m=="DEC" && d==25)
    {
        cout<<"yup";
    }else
    {
        cout<<"nope";
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


