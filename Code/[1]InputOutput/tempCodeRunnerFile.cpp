string s;

    while(getline(cin, s)) {
        stringstream ss(s);
        string word;
        while (ss >> word) {
            cout << word << "\n";
        }
    }