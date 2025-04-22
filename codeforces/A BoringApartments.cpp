#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, x;
    cin >> t;
    while (t--) {
        cin >> x;
        int digit = x % 10;
        int length = to_string(x).size();
        int presses = (digit - 1) * 10 + length * (length + 1) / 2;
        cout << presses << endl;
    }
    return 0;
}