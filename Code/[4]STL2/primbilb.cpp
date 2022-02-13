#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
int x = 2;

bool prime[1073741];

void sieve(int n) {
    int i, k;
    ll m = sqrt(n);
    for (i = 2; i <= m; i++)
    {
        if (prime[i]) 
        {
            for (k = i*i; k <= n; k += i)
            {
                prime[k] = false;
            }
        }
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    ll m;

    memset(prime, true, sizeof(prime));
    prime[0] = false;
    prime[1] = false;

    ll max = 2;

    while (cin >> m)
    {
        if (max < m)
        {
            sieve(m);
            max = m;
        }
        
        
        if (prime[m]) cout << "prima\n";
        else cout << "komposit\n";
        
    }
    
    
}