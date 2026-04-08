#include<bits/stdc++.h>
#include<cmath>
using namespace std;

int n,k,p;
void solve(){
    cin>>n>>k>>p;   
    while (p--)
    {
        if (k==n)
        {
            k=0;
        }
        k++;   
    }
    
}

int main() {
    ios :: sync_with_stdio(0);
    cin.tie(0);
    

    int i=1,t;
    cin>>t;
    while(i<=t) {
        solve();
        cout<<"Case "<<i<<": "<<k<<"\n";
        i++;
    }

}    