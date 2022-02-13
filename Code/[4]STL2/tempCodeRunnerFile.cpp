while (!q.empty())
    {
        cout << q.front();
        q.pop_front();
        if (!q.empty())
        {
            cout << q.back();
            q.pop_back();
        }
        cout << '\n';
    }