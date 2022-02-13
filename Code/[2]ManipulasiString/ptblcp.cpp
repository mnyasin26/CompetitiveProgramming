#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    //cin.tie(0);

    typedef long long ll;
    typedef long double ld;

    int i;

    int a;
    ll b;
    ld c;
    string s;

    cin >> a;
    cin >> b;
    cin >> c;


    s = to_string(a);
    cout << a*2;
    for (i = 0; i < s.length(); i++)
    {
        cout << " " << s[i];
    }

    cout << "\n";

    s = to_string(b);
    cout << b*2;
    for (i = 0; i < s.length(); i++)
    {
        cout << " " << s[i];
    }
    
    cout << "\n";

    cout <<fixed<< c;
    s = to_string(c);
    for (i = 0; i < s.length(); i++)
    {
        cout << " " << s[i];
    }

    cout << "\n";

    return 0;
}