#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

ll gcd(ll n, ll m) {
    ll temp = 0;
    if (m > n) {
        temp = m;
        m = n;
        n = temp;
    }
    if (m == 0) return n;
    return gcd(m, n%m);
}

ll lcm(ll n, ll m) {
    return m*n/gcd(n, m);
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    ll a, b;

    while (cin >> a >> b)
    {
        cout << gcd(a, b) << ' ' << lcm(a, b) << '\n';
    }
    
    return 0;
}