#include "bits/stdc++.h"
using namespace std;using ll = long long;
const ll h = 1e9 + 7; 

void solve(){
    int n, cnt = 0;
    cin >> n;
    vector<ll> arr(n), left_max(n,0), right_max(n,0);
    ll cur_max = 0;
    for (ll j = 0; j < n; ++j)
    {
        cin >> arr[j];
        if(arr[j] > cur_max)
        {
            cur_max = arr[j];
        }
        left_max[j] = cur_max;
    }

    cur_max = 0;
    for (ll j = n-1; j >=0; --j)
    {
        if(arr[j] > cur_max)
        {
            cur_max = arr[j];
        }
        right_max[j] = cur_max;
    }

    for (ll j = 0; j < n; ++j)
    {
        ll min = left_max[j] > right_max[j] ? right_max[j] : left_max[j];
        cnt += (min - arr[j]);
    }
    cout << cnt << endl;

}
int main(){
    ios::sync_with_stdio(0);cin.tie(0);
    int t = 1; 
    cin >> t; 
    while(t--){
        solve();
    }
}
