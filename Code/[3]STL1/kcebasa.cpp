#include <bits/stdc++.h>

using namespace std;
#define loop(a, b) for(int a = 0; a < b; a++)

//#define out2 cout << vpp[i].first << ' ' << vpp[i].second.first << ' ' << vpp[i].second.second << '\n'
//#define out1 cout << vpp2[j].first << ' ' << vpp2[j].second.first << ' ' << vpp2[j].second.second << '\n'

int conv(string a, string b, int type){
    
    int c;

    if (type == 1)
    {
        istringstream ss(a);
        string temp1;
        getline(ss, temp1, '.');
        c = 60*stoi(temp1);
        getline(ss, temp1, '.');
        c += stoi(temp1);
    }
    else
    {
        istringstream ss(b);
        string temp1;
        getline(ss, temp1, '.');

        istringstream sz(a);
        string temp2;
        getline(sz, temp2, '.');

        
        if (stoi(temp1) < stoi(temp2))
        {
            
            c = 60*(stoi(temp1)+24);
        }
        else
        {
            c = 60*stoi(temp1);
        }
        
        getline(ss, temp1, '.');
        c += stoi(temp1);
    }
    
    return c;
}


int main() {
    ios::sync_with_stdio(0);
    //cin.tie(0);

    
    int m;
    cin >> m;

    int x, y;

    cin >> x;

    vector<pair<int, pair<string, string>>> vpp;
    vector<pair<int, pair<string, string>>> vpp2;
    set<pair<int, pair<string, string>>> sett;

    loop(i, x) {
        int p;
        string q;
        string r;
        cin >> p >> q >> r;

        vpp.push_back(make_pair(p, make_pair(q, r)));
        //cout << vpp[i].second.second.first << ' ';


    }

    cin >> y;

    loop(i, y) {
        int p;
        string q;
        string r;
        cin >> p >> q >> r;

        vpp2.push_back(make_pair(p, make_pair(q, r)));
        //cout << vpp[i].second.second.first << ' ';
    }
    cout << '\n';

    sort(vpp.begin(), vpp.end());
    sort(vpp2.begin(), vpp2.end());

    
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y; j++)
        {
            if (vpp[i].first == vpp2[j].first)
            {
                /*
                string vp1 = vpp[i].second.first;
                string vp2 = vpp[i].second.second;

                string vp3 = vpp2[j].second.first;
                string vp4 = vpp2[j].second.second;
                */

                int l[4];
                int temp;
                l[2] = conv(vpp[i].second.first, vpp[i].second.second, 1);
                l[3] = conv(vpp[i].second.first, vpp[i].second.second, 2);

                l[0] = conv(vpp2[j].second.first, vpp2[j].second.second, 1);
                l[1] = conv(vpp2[j].second.first, vpp2[j].second.second, 2);


                if (l[0] <= l[2])
                {
                    if (l[1] >= l[2] && l[1] <= l[3])
                    {
                        temp = (l[1] - l[2]) - m;
                        if (temp >= 0 && (l[1] - l[0]) <= (l[3] - l[2]))
                        {
                            sett.insert(vpp2[j]);
                            //out1;
                        }
                        if (temp >= 0 && (l[1] - l[0]) >= (l[3] - l[2]))
                        {
                            sett.insert(vpp[i]); 
                            //out2;
                        }
                    }

                    if (l[1] >= l[2] && l[1] >= l[3])
                    {
                        temp = (l[3] - l[2]) - m;
                        if (temp >= 0 && (l[1] - l[0]) <= (l[3] - l[2]))
                        {
                            sett.insert(vpp2[j]);
                            //out1;
                        }
                        if (temp >= 0 && (l[1] - l[0]) >= (l[3] - l[2]))
                        {
                            sett.insert(vpp[i]);
                            //out2;
                        }
                    }
                    
                }

                if (l[0] >= l[2] && l[0] <= l[3])
                {
                    if (l[1] >= l[2] && l[1] <= l[3])
                    {
                        temp = (l[1] - l[0]) - m;
                        if (temp >= 0 && (l[1] - l[0]) <= (l[3] - l[2]))
                        {
                            sett.insert(vpp2[j]);
                            //out1;
                        }
                        if (temp >= 0 && (l[1] - l[0]) >= (l[3] - l[2]))
                        {
                            sett.insert(vpp[i]);
                            //out2;
                        }
                    }

                    if (l[1] >= l[2] && l[1] >= l[3])
                    {
                        temp = (l[3] - l[0]) - m;
                        if (temp >= 0 && (l[1] - l[0]) <= (l[3] - l[2]))
                        {
                            sett.insert(vpp2[j]);
                            //out1;
                        }
                        if (temp >= 0 && (l[1] - l[0]) >= (l[3] - l[2]))
                        {
                            sett.insert(vpp[i]);
                            //out2;
                        }
                    }
                    
                }
                
            }
            
        }
    }
    
    /*
    set<pair<int, pair<string, string>>>::const_iterator it;

    for (it = sett.begin(); it != sett.end(); it++) 
    {
        cout << *it << '\n';
    }
    */
    if (sett.size() == 0)
    {
        cout << "ikhlaskan saja\n";
    }
    
    for (auto const &var : sett) {
      cout << var.first << ' ' << var.second.first << ' ' << var.second.second << '\n';
    }
    //cout << conv("12.30");
    return 0;
}