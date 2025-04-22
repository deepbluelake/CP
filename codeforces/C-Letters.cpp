#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    vector<long long> a(n);
    vector<long long> b(m);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
    }

    vector<long long> prefsum(n);
    prefsum[0] = a[0];
    for (int i = 1; i < n; i++)
    {
        prefsum[i] = prefsum[i - 1] + a[i];
    }

    for (auto room : b)
    {
        int dorm = lower_bound(prefsum.begin(), prefsum.end(), room) - prefsum.begin();
        long long previous_sum = (dorm == 0 ? 0 : prefsum[dorm - 1]);
        long long local_room = room - previous_sum;
        cout << dorm + 1 << " " << local_room << "\n";
    }

    return 0;
}
