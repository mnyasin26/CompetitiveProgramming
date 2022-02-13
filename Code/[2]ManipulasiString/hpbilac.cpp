#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    typedef long long ll;

    ll temp = 0;
    string s;


    while(getline(cin, s)) {
        stringstream ss(s);
        string word;
        while (ss >> word) {
            temp += stoll(word);
            cout << word << "\n";
        }
    }
    
    cout << temp << "\n";

    return 0;
}