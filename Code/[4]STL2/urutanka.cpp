#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    ll n; 
    int r;
    cin >> n >> r;

    deque<ll> dq;
    ll m;
    int i;
    for (i = 0; i < r; i++)
    {
        cin >> m;
        if (m%n == 0)
        {
            dq.push_back(m);
        }
    }
    
    int x = dq.size();
    for (i = 0; i < x; i++)
    {
        if (i%2 == 0)
        {
            cout << dq.back();
            dq.pop_back();
            
        }
        else
        {
            cout << dq.front();
            dq.pop_front();
        }

        if (i != x-1)
        {
            cout << ' ';
        }
        else
        {
            cout << "\n";
        }    
    }

    return 0; 
    
}