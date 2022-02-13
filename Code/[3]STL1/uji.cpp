#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    string str;

    set<string> s;

    while(cin >> str) {
        cout << str << "\n";
        if (str.back() == '.')
        {
            str.at(str.end()) = 0;
        }
        
        s.insert(str);
    }
    set<string>::const_iterator it;

    //for (it = s.begin();it!=s.end();it++) cout << *it << "\n";
    return 0;
}
