#include "bits/stdc++.h"
using namespace std;using ll = long long;
const ll h = 1e9 + 7; 
void solve(){
    int n; cin>>n;
    int cnt[3] = {0};
    int a[n];
    for(int i = 0; i < n; i++) 
        cin>>a[i], cnt[a[i]]++;
    cnt[2]+=cnt[1]+=cnt[0];
    int cur = 0;
    for(int i = 0; i <3;i++){
        while(cur!=cnt[i])
            a[cur++] = i;
    }
    for(int i = 0;i<n;i++) cout << a[i] << " \n"[i==n-1];
    
}
int main(){
    ios::sync_with_stdio(0);cin.tie(0);
    int t = 1; 
    cin >> t; 
    while(t--){
        solve();
    }
}
