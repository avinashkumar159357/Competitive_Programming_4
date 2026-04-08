#include<bits/stdc++.h>
#include<cmath>
using namespace std;

void solve(){
    int n,x,i=2;
    int tenth_place;
    cin>>n;
    x=((((((n*567)/9)+7492)*235)/47)-498);
    while (i--)                   //instead of while loop and o(n)
    {                             //we can directly do 
        tenth_place=x%10;         //tenth_place=(x/10)%10      {o(1) answer}
        x/=10;                    //to get the tenth place
    }
    cout<<abs(tenth_place)<<"\n";
    
        
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


///////////////////////////////////////////////////////////////////////////
#include<bits/stdc++.h>
#include<cmath>
using namespace std;

void solve(){
    int n,x;
    int tenth_place;
    cin>>n;
    x=((((((n*567)/9)+7492)*235)/47)-498);
   tenth_place=(x/10)%10;
    cout<<abs(tenth_place)<<"\n";
    
        
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

