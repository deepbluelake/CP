#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int num, absorptions, strikes;
        cin >> num >> absorptions >> strikes;
        while (num > 20 && absorptions--)
            num = (num / 2) + 10;
        cout << (num <= strikes * 10 ? "YES" : "NO") << endl;
    }
    return 0;
}
