#include<bits/stdc++.h>
using namespace std;

void solve(){
    long long n,x=1;
    cin>>n;
    while((x*(x+1)<=(2*n))){             //this problem is logically corrrect but it exceeds the time limit as we are 
        x++;                             //using O(n) here but this problem can be solved in O(1) time throgh quadratic 
    }                                     //equation
    cout<<--x<<"\n";
}

int main() {
    ios :: sync_with_stdio(0);
    cin.tie(0);
    

    int t;
    cin>>t;
    while(t--) {
        solve();
    }

}    //////////////////////////////////////////////////////////////////////////////


#include<bits/stdc++.h>
#include<cmath>
using namespace std;

void solve(){
    long long n,x,x1,x2;
    cin>>n;
    x1=-1;
    x2=sqrt(1+(8*n));
    x=((x1+x2)/2);
    cout<<x<<"\n";        
}

int main() {
    ios :: sync_with_stdio(0);
    cin.tie(0);
    

    int t;
    cin>>t;
    while(t--) {
        solve();
    }

}    