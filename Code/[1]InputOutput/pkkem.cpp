#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    long long a;
    long long b;

    cin >> a;
    cin >> b;

    if(a>b)cout << "Kembalian\n";

    else if(a<b)cout << "Kurang\n";

    else cout << "Pas\n";

    return 0;
}