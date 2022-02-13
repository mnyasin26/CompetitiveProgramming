#include <bits/stdc++.h>

using namespace std;

typedef vector<pair<int, string>> vp;
#define loop(x,n) for(int x = 0; x < n; ++x)

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    vp vp1;

    int n;

    string temp;
    while (getline(cin, temp) && temp != "selesai")
    {
        stringstream ss(temp);
        string word;
        int i = 0;

        int a;
        string s;
        while (ss >> word)
        {
            if (i == 0)
            {
                a = stoll(word);
                i = 1;
            }
            else
            {
                if (i == 1)
                {
                    i = 2;
                }
                else
                {
                    s.append(" ");
                }
                s.append(word);
            }
        }
        
        vp1.push_back(make_pair(a, s));
        //cout << a << ' ' << s << "\n";

        
    }

    cin >> n;

    sort(vp1.rbegin(), vp1.rend());

    loop(x, n) {
        cout << vp1[x].second << ' ' << vp1[x].first << "\n";
    }
    
    return 0;
}