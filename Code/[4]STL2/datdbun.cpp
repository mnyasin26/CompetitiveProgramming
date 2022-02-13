#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    map<ll, string> m;
    ll a;
    string s;

    while (cin >> a && getline(cin , s))
    {
        m.insert(make_pair(a, s));
    }
    
    for (auto const &var : m) {
      cout << var.first << var.second << '\n';
    }
}