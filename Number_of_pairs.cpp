#include "bits/stdc++.h"
using namespace std;
using ll = long long;
const ll h = 1e9 + 7;
int X[100001], Y[100001];
int count(int x, int n, int NoOfY[]) {
  if (x == 0) return 0;
  if (x == 1) return NoOfY[0];
  int* idx = upper_bound(Y, Y + n, x);
  int ans = (Y + n) - idx;
  ans += (NoOfY[0] + NoOfY[1]);
  if (x == 2) ans -= (NoOfY[3] + NoOfY[4]);
  if (x == 3) ans += NoOfY[2];
  return ans;
}
ll countPairs(int m, int n) {
  int NoOfY[5] = {0};
  for (int i = 0; i < n; i++)
    if (Y[i] < 5) NoOfY[Y[i]]++;
  sort(Y, Y + n);
  ll ans = 0;
  for (int i = 0; i < m; i++) ans += count(X[i], n, NoOfY);
  return ans;
}
void solve() {
  int m, n;
  cin >> m >> n;
  for (int i = 0; i < m; i++) cin >> X[i];
  for (int i = 0; i < n; i++) cin >> Y[i];
  cout << countPairs(m, n) << endl;
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
