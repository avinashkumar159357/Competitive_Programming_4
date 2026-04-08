#include<bits/stdc++.h>
#include<cmath>
using namespace std;

void solve(){
    int n,m;
    cin>>n>>m;
    if (n>m)
    {   
        if ((n-m)==1)
        {
            cout<<"Dr. Chaz needs "<<(n-m)<<" more piece of chicken!";    
        }else
        {
            cout<<"Dr. Chaz needs "<<(n-m)<<" more pieces of chicken!";
        }
    }else if(m>n)
    {
        if ((m-n)==1)
        {
            cout<<"Dr. Chaz will have "<<(m-n)<<" piece of chicken left over!";
        }else{
            cout<<"Dr. Chaz will have "<<(m-n)<<" pieces of chicken left over!";
        }
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


