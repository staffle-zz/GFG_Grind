#include "bits/stdc++.h"
using namespace std;using ll = long long;
const ll h = 1e9 + 7; 

void solve(){
    int n,k;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; ++i){
        cin >> a[i];        
    }    
    cin >> k;
    k--;
    nth_element(a , a + k , a+n);
    cout << a[k] << endl;
}
int main(){
    ios::sync_with_stdio(0);cin.tie(0);
    int t = 1; 
    cin >> t; 
    while(t--){
        solve();
    }
}
