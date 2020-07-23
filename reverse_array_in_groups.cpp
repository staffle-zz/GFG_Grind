#include "bits/stdc++.h"
using namespace std;using ll = long long;
const ll h = 1e9 + 7; 
void solve(){
    int n , k , x;
    cin >> n >> k;
    stack<int> st;
    for(int i = 0; i < n; i++){
        cin >> x; st.push(x);
        if(st.size() == k){
            while(st.empty()==false){
                cout << st.top() << " ";
                st.pop();
            }
        }
    }
    while(st.empty()==false){
        cout << st.top() << " ";
        st.pop();
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
