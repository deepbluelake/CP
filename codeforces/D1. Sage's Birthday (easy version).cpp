#include <bits/stdc++.h>
using namespace std;

/* TYPES  */
#define ll long long
#define pii pair<int, int>
#define pll pair<long long, long long>
#define vi vector<int>
#define vll vector<long long>
#define mii map<int, int>
#define si set<int>
#define sc set<char>

/* FUNCTIONS */
#define f(i, s, e) for (long long int i = s; i < e; i++)
#define cf(i, s, e) for (long long int i = s; i <= e; i++)
#define rf(i, e, s) for (long long int i = e - 1; i >= s; i--)
#define pb push_back
#define eb emplace_back

int main()
{
    ll n;
    cin >> n;

    vll a(n);
    f(i, 0, n) cin >> a[i];

    sort(a.begin(), a.end());

    vll result(n);
    ll cheap_count = (n - 1) / 2;

    // Place elements in zigzag order
    ll idx = 0;
    for (ll i = 1; i < n; i += 2)
    {
        result[i] = a[idx++];
    }
    for (ll i = 0; i < n; i += 2)
    {
        result[i] = a[idx++];
    }

    cout << cheap_count << endl;
    f(i, 0, n)
    {
        cout << result[i] << " ";
    }
    cout << endl;

    return 0;
}
