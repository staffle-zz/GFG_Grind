#include "bits/stdc++.h"
using namespace std;
using ll = long long;

#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#include <ext/pb_ds/trie_policy.hpp>    
#include <ext/rope>
using namespace __gnu_pbds;
using namespace __gnu_cxx;
template<typename T> 
using oset = tree< T, null_type, less_equal<T>, rb_tree_tag,tree_order_statistics_node_update>;


void solve() {
  int n; cin >> n;
  vector<ll> a(n);
  oset<ll> st;
  for (int i = 0; i < n; ++i){
    cin >> a[i];
  }
  ll ans = 0;
  for(int i = n-1;i >= 0;i--){
    ans += st.order_of_key(a[i]);
    st.insert(a[i]);
  }
  cout << ans << endl;



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
