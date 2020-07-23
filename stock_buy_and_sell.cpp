#include "bits/stdc++.h"
using namespace std;using ll = long long;
const ll h = 1e9 + 7; 
void solve(){
    int n; cin >> n;
    int arr[n+1];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    int i=0,a=0,b=0;
    while(i<n-1)
    {
        while(i<n-1 && arr[i+1]<=arr[i])
            i++;
        if(i==n-1)
            break;
        a=i++;
        while(i<n && arr[i]>=arr[i-1])
            i++;
        b=i-1;
        cout<<"("<<a<<" "<<b<<")"<<" ";
    }
    if(a==0 && b==0)
        cout<<"No Profit";
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
