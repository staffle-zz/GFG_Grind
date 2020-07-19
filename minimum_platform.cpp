#include "bits/stdc++.h"
using namespace std;
int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int t = 1;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    int arr[n],brr[n];
    for (int i = 0; i < n; i++) cin >> arr[i];
    for (int i = 0; i < n; i++) cin >> brr[i];
    int cnt[5000] = {0};
    int ans = 0;
    for (int i = 0; i < n; i++) {
        if(brr[i] < arr[i]) brr[i]+=2360;
        cnt[arr[i]]++;
        cnt[brr[i]+1]--;
    }
    for(int i = 1; i < 5000;i++) cnt[i]+=cnt[i-1];
    for(int i = 0; i < 2360;i++) ans = max(ans,cnt[i] + cnt[2350+i]);
    cout << ans << endl;
  }
}
