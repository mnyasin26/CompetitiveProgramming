#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    //cin.tie(0);

    vector<vector<string>> vv;
    char c;
    string s;
    cin >> c >> s;
    
    
    deque<string> q;
    istringstream ss(s);
    string temp;

    while (getline(ss, temp, c))
    {
        vector<string> pv;
        pv.push_back(temp);
        vv.push_back(pv);
    }

    //cout << vv[0].size();
    int i,j;
    

    for (i = 1; i < vv.size(); i++)
    {
    
        for (j = 0; j < vv[i].size(); j++)
        {

            q.push_back(vv[i][j]);
        }
        //cout << '\n';
    
    }
    //cout << q.front();
    string ok;
    stack<string> st;
    while (!q.empty())
    {
        ok = q.front();
        q.pop_front();
        if (!q.empty())
        {
            ok += q.back();
            q.pop_back();
        }
        st.push(ok);
    }

    while (!st.empty())
    {
        cout << st.top() << '\n';
        st.pop();
        
    }
    
    


}