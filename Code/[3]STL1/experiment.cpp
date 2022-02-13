#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    string str;

    set<string> s;

    while(cin >> str) {
        //str.at(str.length() - 1) = 0;
        
        if (str.back() == '.')
        {
            str.erase(str.length()-1);
        }
    
        //str.erase(str.length()-1);
        //cout << str << ' ' << str.back() << ' ' << str.length() - 1 << "\n";

        s.insert(str);
    }
    set<string>::reverse_iterator it;

    for (it = s.rbegin();it!=s.rend();it++) cout << *it << "\n";
    
    return 0;
}
