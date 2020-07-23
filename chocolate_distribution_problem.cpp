#include "bits/stdc++.h"
using namespace std;using ll = long long;
const ll h = 1e9 + 7; 
void solve(){
    int n,k; cin >> n;
    ll a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    cin >> k;
    sort(a, a+n);
    ll ans = 1e18;
    for(int i = 0; i <= n-k; i++){
        ans = min(ans , a[i+k-1] - a[i]);
    }
    cout << ans << endl;
}
int main(){
    ios::sync_with_stdio(0);cin.tie(0);
    int t = 1; 
    cin >> t; 
    while(t--){
        solve();
    }
}
