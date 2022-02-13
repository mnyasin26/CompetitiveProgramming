#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    //cin.tie(0);

    string a;
    int n;

    stack<int> x;
    stack<int> y;
    stack<int> z;

    vector<pair<int, char>> vp;
 
    cin >> n;

    int it = -1;

    for (int i = 0; i < n+1; i++)
    {
        it++;
        //cout << it;
        getline(cin, a);
        //cout << i << ' ' << a.size() << ' ' << a << '\n';
        for (int j = 0; j < a.size(); j++)
        {
            if ((a.at(j) == '[') )
            {
                x.push(i);
                //cout << "test";
            }
            if ((a.at(j) == ']') )
            {
                x.pop();
                //cout << "test";
            }
            if ((a.at(j) == '{') )
            {
                y.push(i);
            }
            if ((a.at(j) == '}') )
            {
                y.pop();
            }
            if ((a.at(j) == '(') )
            {
                z.push(i);
            }
            if ((a.at(j) == ')') )
            {
                z.pop();
            }
        }

        //cout << x.top().first << ' ' << x.top().second;
        
    }

    //cout << "test";

   
    if (x.empty() && y.empty() && z.empty())
    {
        cout << "ngagaduhan kasuksesan\n";
    }
    else
    {
        while ((!x.empty()))
        {
            vp.push_back(make_pair(x.top(), ']'));
            x.pop();
        }
        while ((!y.empty()))
        { 
            vp.push_back(make_pair(y.top(), '}'));
            y.pop();
        }
        while ((!z.empty()))
        { 
            vp.push_back(make_pair(z.top(), ')'));
            z.pop();
        }
    }

    sort(vp.begin(), vp.end());

    for (auto const &var : vp)
    {
        cout << var.first << ' ' << var.second << '\n';
    }
    
    //cout << x.size() << '\n';
    return 0;
}