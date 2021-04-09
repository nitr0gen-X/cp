#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
    int n, a[50][50];
    cin >> n;
    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++)
            cin >> a[i][j];
    int b[50][50];
    int x = 0, y = 0;
    for(int i = 0; i < n; i++) {
        if(i == n - 2) continue;
        for(int j = 0; j < n; j++) {
            if(j == n - 2) continue;
            if(y >= n - 1) y = 0;
            b[x][y] = a[i][j];
            y++;
        }
        x++;
    }
    cout << '\n';
    for(int i = 0; i < n - 1; i++) {
        for(int j = 0; j < n - 1; j++)
            cout << b[i][j] << ' ';
        cout << '\n';
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t = 1;
    //cin >> t;
    while(t--) {
        solve();
    }
}