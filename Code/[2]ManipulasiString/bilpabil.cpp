#include <bits/stdc++.h>

using namespace std;

int main (){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int i;

    string temp;

    while (getline(cin, temp))
    {
        istringstream ss(temp);
        string token;

        while (getline(ss, token, '@'))
        {
            
            i = 0;
            while (i < token.length() && (isdigit(token[i])))
            {
                i++;
            }

            if (i == token.length())
            {
                cout << token << " bilangan" << "\n";
            }
            else
            {
                cout << token << " bukan bilangan" << "\n";
            }
            
        }
    }
    
    return 0;

}