#include <bits/stdc++.h>

using namespace std;


int main () {
    ios::sync_with_stdio(0);
    cin.tie(0);

    vector<pair<int, string>> vp;
    
    int n;
    cin >> n;
    
    for (int i = 0; i < n; i++)
    {
        string a, p;
        int b, c, d,
            q, r, s;

        cin >> a >> b >> c >> d >> p >> q >> r >> s;

        long temp = sqrt(pow((b-q), 2)+pow((c-r), 2));

        a.append(" ");
        vp.push_back(make_pair(temp, a.append(p)));
    }
    
    sort(vp.rbegin(), vp.rend());

    for (int i = 0; i < n; i++)
    {
        cout << vp[i].second << ' ' << vp[i].first << '\n';
    }
    
    return 0;
}