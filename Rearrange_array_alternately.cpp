#include "bits/stdc++.h"
using namespace std;
using ll = long long;
vector<ll> a;
void solve() {
  int n;
  cin >> n;
  a.resize(n);
  for (int i = 0; i < n; i++) cin >> a[i];
  ll z = a[n - 1] + 1;
  int l = 0, r = n - 1;
  for (int i = 0; i < n; i++) {
    if (i & 1)
      a[i] += (a[l++] % z) * z;
    else
      a[i] += (a[r--] % z) * z;
  }
  for (int i = 0; i < n; i++) cout << a[i] / z << " ";
  cout << "\n";
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
