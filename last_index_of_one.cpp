#include "bits/stdc++.h"
using namespace std;using ll = long long;
const ll h = 1e9 + 7; 
void solve(){
    string s;
    cin >> s;
    for(int i = s.length()-1; i >= 0; i--){
        if(s[i]=='1'){
            cout << i << endl;
            return;
        }
    }
    cout << -1 << endl;
    

}
int main(){
    ios::sync_with_stdio(0);cin.tie(0);
    int t = 1; 
    cin >> t; 
    while(t--){
        solve();
    }
}
