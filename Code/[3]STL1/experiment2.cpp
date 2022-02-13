#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);


    vector<pair<int, string>> vp;
    int a, i;

    string s;

    while(cin >> a >> s) vp.push_back(make_pair(a, s));

    for(i=0;i<vp.size();i++)cout << vp[i].first << " " << vp[i].second << "\n";

    
    //cout << stoll(temp);
}