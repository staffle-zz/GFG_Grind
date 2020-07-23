#include "bits/stdc++.h"
using namespace std;using ll = long long;
const ll h = 1e9 + 7; 

void solve(){
    int n;cin>>n;
    int a[n];
    int flag=0;
    for(int i=0;i<n;i++)
        cin>>a[i];
    for(int i=0;i<n-1;i++){
        if(!flag)
            if(a[i]>a[i+1])
                swap(a[i],a[i+1]);
        if(flag)
            if(a[i]<a[i+1])
                swap(a[i],a[i+1]);
            flag=!flag;
    }
    for(int i=0;i<n;i++)
        cout<<a[i]<<" "; 
    cout<<"\n";
}
int main(){
    ios::sync_with_stdio(0);cin.tie(0);
    int t = 1; 
    cin >> t; 
    while(t--){
        solve();
    }
}
