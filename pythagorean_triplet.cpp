#include "bits/stdc++.h"
using namespace std;using ll = long long;
const ll h = 1e9 + 7; 

void solve(){
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; ++i){
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    a.erase(unique(a.begin(), a.end()) , a.end());
    unordered_set<int> st;
    for(auto i:a){
        st.insert(i*i);
    }
    for(auto i:st){
        for(auto j:st){
            if(st.count(i+j)){
                cout << "Yes" << endl;
                return;
            }
        }
    }
    cout << "No" << endl;
}
int main(){
    ios::sync_with_stdio(0);cin.tie(0);
    int t = 1; 
    cin >> t; 
    while(t--){
        solve();
    }
}
