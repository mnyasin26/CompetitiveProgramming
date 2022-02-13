#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    typedef vector<string> vs;

    vs in;
    int i, j;
    string s;


    while (cin >> s)
    {
        in.push_back(s);
    }

    for (i = in.size()-1; i >= 0 ; i--)
    {
        transform(in[i].begin(), in[i].end(), in[i].begin(), ::toupper);
        for (j = 0; j < in[i].length(); j++)
        {
            if (in[i].at(j) == 'a' || in[i].at(j) == 'A')
            {
                in[i].at(j) = '@';
            }
        }
        reverse(in[i].begin(), in[i].end());
        cout << in[i] << "\n";
    }
    
    return 0;
}