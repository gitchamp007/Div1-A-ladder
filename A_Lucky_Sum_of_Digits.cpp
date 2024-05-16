#include <bits/stdc++.h>
#define ll long long 
#define ul unsigned long long 
#define ld long double 
#define M 1000000007
#define endl '\n' 
using namespace std; 

void solve() {
    int n; cin >> n;
    int n4 = 0, n7 = 0, mini = INT_MAX;
    for(int i = 0; i <= n/7; i++) {
        if((n - i*7) % 4 == 0) {
            if((n - i*7) / 4 + i < mini) {
                mini = (n - i*7) / 4 + i;
                n4 = (n - i*7) / 4;
                n7 = i;
            }
        }
    }
    if(mini == INT_MAX) cout << -1; 
    else {
        while(n4--) cout << 4;
        while(n7--) cout << 7;
    }
}

signed main() {
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    // int _t; cin >> _t; while(_t--) 
        solve();
    return 0;
}