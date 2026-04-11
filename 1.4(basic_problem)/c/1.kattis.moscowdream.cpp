#include<bits/stdc++.h>
#include<cmath>
using namespace std;

void solve(){
    int a,b,c,n;
    cin>>a>>b>>c>>n;
    if (a>=1 && b>=1 && c>=1 && (a+b+c)>=n && n>=3)//checking n>=3 is a crucial
    {                                                //check,if one problem from each category is rewuired 
        cout<<"YES";                                 //then n should be minimum 3
    }else
    {
        cout<<"NO";
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


