#include "bits/stdc++.h"
using namespace std;
using ll = long long;
int n, m;
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());
ll rnd(ll x = -1e9, ll y = 1e9) {
  return uniform_int_distribution<ll>(x, y)(rng);
}
vector<int> a, b;
int get(int id) {
  if (id < n) return a[id];
  return b[id - n];
}
void swap_id(int i, int j) {
  if (i < n and j < n)
    swap(a[i], a[j]);
  else if (i < n)
    swap(a[i], b[j - n]);
  else if (j < n)
    swap(a[i - n], b[j]);
  else
    swap(b[i - n], b[j - n]);
}
int partition(int low, int high) {
  int i = low - 1;
  int pivot = get(high);
  for (int j = low; j < high; j++) {
    if (get(j) < pivot) {
      i++;
      swap_id(i, j);
    }
  }
  swap_id(i + 1, high);
  return i + 1;
}
int partition_r(int low, int high) {
  int random = rnd(low,high);
  swap_id(random, high);
  return partition(low, high);
}
void sort(int low, int high) {
  if (low < high) {
    int pi = partition_r(low, high);
    sort(low, pi - 1);
    sort(pi + 1, high);
  }
}
void solve() { sort(0, n + m - 1); }
int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int t = 1;
  cin >> t;
  while (t--) {
    cin >> n >> m;
    a.resize(n);
    b.resize(m);
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < m; i++) cin >> b[i];
    solve();
    for (int i = 0; i < n; i++) cout << a[i] << " \n"[i == n - 1];
    for (int i = 0; i < m; i++) cout << b[i] << " \n"[i == m - 1];
  }
}
