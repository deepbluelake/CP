#include <bits/stdc++.h>
using namespace std;

void findF(const vector<int> &p, const string &s, int n)
{
    vector<int> Funnn(n, 0);
    vector<bool> visited(n, false);

    for (int i = 0; i < n; i++)
    {
        if (!visited[i])
        {

            int current = i;
            vector<int> cycle;
            int black = 0;

            while (!visited[current])
            {
                visited[current] = true;
                cycle.push_back(current);
                if (s[current] == '0')
                {
                    black++;
                }
                current = p[current] - 1;
            }

            for (int idx : cycle)
            {
                Funnn[idx] = black;
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << Funnn[i] << " ";
    }
    cout << endl;
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        vector<int> p(n);
        for (int i = 0; i < n; i++)
        {
            cin >> p[i];
        }

        string s;
        cin >> s;

        findF(p, s, n);
    }

    return 0;
}