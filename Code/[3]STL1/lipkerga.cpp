#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int n;
    cin >> n;
    int x;

    pair<int, int> p;
    for (int i = 0; i < n; i++)
    {
        cin >> p.first >> p.second >> x;
        for (int j = 0; j < x; j++)
        {
            if (p.first > p.second)
            {
                p.first /= 2;
            }
            else
            {
                p.second /= 2;
            }
        }
        
        
        cout << max(p.first, p.second) << ' ' << min(p.first, p.second) << '\n';
    }

    
    return 0;
    
}