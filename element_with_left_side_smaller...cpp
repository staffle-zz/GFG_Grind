#include "bits/stdc++.h"
using namespace std;using ll = long long;
const ll h = 1e9 + 7; 

void solve(){
    int n;
    cin >> n;
    vector<int> a(n) , left(n+1) , right(n+1);
    for (int i = 0; i < n; ++i){
        cin >> a[i];
        if(i)
            left[i] = max(left[i-1] , a[i]);
        else
            left[i] = a[i];
    }
    for(int i = n-1; i >= 0; i--){
        if(i==n-1)
            right[i] = a[i];
        else
            right[i] = min(right[i+1] , a[i]);
    }
    for(int i = 1;i < n-1; i++){
        if(left[i-1] <= a[i] and right[i+1] >= a[i]){
            cout << a[i] << endl;
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
