#include "bits/stdc++.h"
using namespace std;using ll = long long;
const ll h = 1e9 + 7; 
void solve(){
    int n; cin >>n;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    int mtn = 0;
    stack<int> st;
    for(int i = n-1 ; i >=0; i--){
        if(a[i] >= mtn) {
            st.push(a[i]);
        }
        mtn = max(mtn , a[i]);
    }
    while(st.empty()!=true){
        cout << st.top() <<" " , st.pop();
    }
    cout << endl;
        
}

int main(){
    ios::sync_with_stdio(0);cin.tie(0);
    int t = 1; 
    cin >> t; 
    while(t--){
        solve();
    }
}
