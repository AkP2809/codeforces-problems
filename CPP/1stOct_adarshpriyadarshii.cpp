//Adarsh Priyadarshi
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define min(a,b) ((a<b)?a:b)
#define max(a,b) ((a>b)?a:b)
void solve(){
    string s;
    cin>>s;
    ll p=s.size();
    if(p<=10)cout<<s<<endl;
    else cout<<s[0]<<p-2<<s[p-1]<<endl;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}