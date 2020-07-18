#include "bits/stdc++.h"
using namespace std;
using ll = long long;
const ll h = 1e9 + 7;
void solve() {
  int n, ans = -1;
  cin >> n;
  ll a[n], stn[n] = {0};
  for (int i = 0; i < n; i++) {
    cin >> a[i];
    if (i) stn[i] = stn[i - 1];
    stn[i] += a[i];
  }
  for (int i = 1; i < n; i++) {
    if (stn[i-1]   == stn[n-1] - stn[i]) {
      ans = i+1;
      break;
    }
  }
  if(n==1) 
    ans = 1;
  cout << ans << "\n";
}
int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int t = 1;
  cin >> t;
  while (t--) {
    solve();
  }
}
