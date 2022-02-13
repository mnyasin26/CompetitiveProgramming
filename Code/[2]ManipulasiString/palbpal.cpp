#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    string in;
    

    while (getline(cin, in))
    {
        string rev;
    
        rev = in;
        reverse(rev.begin(), rev.end());
            
        if (rev == in)
        {
            cout << "palindrom" << "\n";
        }
        else
        {
            cout << "bukan palindrom" << "\n";
        }
    }

    return 0;
        
}
    
    
