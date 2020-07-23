#include "bits/stdc++.h"
using namespace std;using ll = long long;
const ll h = 1e9 + 7;
int dy[] = {1,0,-1,0};
int dx[] = {0,+1,0,-1};
int n,m;
bool is_out(int x,int y){
    if((x<0 || x>=n)||(y<0 || y>=m)) 
        return 1;
    return 0;
}
int vis[11][11];
int mat[11][11];
void solve(){
    
    cin >> n >> m;
    for(int i = 0; i < n; i++){ 
      for(int j = 0; j < m; j++){ 
        cin >> mat[i][j];
        vis[i][j] = false;
      }
    }

    int curx = 0,cury = 0 , dirc = 0 , done = 0;
    int iter = 0;
    while(done!=n*m){
        vis[curx][cury] = 1;
        cout << mat[curx][cury] << " ";
        done++;
        curx += dx[dirc];
        cury += dy[dirc];
        if(is_out(curx,cury) || vis[curx][cury]==true){
            curx -= dx[dirc];
            cury -= dy[dirc];
            dirc = (dirc+1)%4;
            curx += dx[dirc];
            cury += dy[dirc];
        }
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
