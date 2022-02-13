#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int a, b, c;
    string s;
    int x;
    int temp1 = 0, temp2 = 0, temp3 = 0;

    queue<pair<string, int>> q;

    while (cin >> a >> b >> c)
    {
        temp1 += b; temp2 += q.size();
        for (int i = 0; i < c; i++)
        {
            cin >> s >> x;
            q.push(make_pair(s, x));
        }

        c+=temp2;
        for (int i = 0; i < c; i++)
        {
            if (temp1 - q.front().second >= 0 && !q.empty())
            {
                temp1 -= q.front().second;
                q.pop();
            }
            else
            {
                int k = q.front().second;
                //cout << k << ' ';
                q.front().second -= temp1;
                
                if (!q.empty())
                {
                    temp1 = 0;
                }
                
                
            }
        }
        
        
        
    }
    
    

    if (temp1 == 0 && q.empty())
    {
        cout << "sukses\n";
    }
    else if (temp1 > 0 && q.empty())
    {
        cout << temp1 << '\n';
    }
    else
    {
        //cout << temp1 << '\n';
        while (!q.empty()) {
            cout << q.front().first << ' ' << q.front().second << '\n';
            q.pop();
        }
    }
    
    return 0;
}