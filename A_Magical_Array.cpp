#include <bits/stdc++.h>
#define ll long long 
#define ul unsigned long long 
#define ld long double 
#define M 1e9 + 7
#define endl '\n' 
using namespace std; 

void solve() {
    ll n; cin >> n;
    ll a[n], ans = 0;
    for(int i = 0 ; i < n; i++) cin >> a[i];

    ll temp = 1;

    for(ll i = 0; i < n - 1; i++) {
        if(a[i] == a[i +1]) temp++;
        else {
            ans += 1LL*temp*(temp + 1)/2;
            temp = 1;
        }
    }
    ans += 1LL*temp * (temp + 1)/2;
    cout << ans;
}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    // int _t; cin >> _t; while(_t--) 
        solve();
    return 0;
}

