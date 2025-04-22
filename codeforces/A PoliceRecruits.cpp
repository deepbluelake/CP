#include <bits/stdc++.h>
using namespace std;


int main() {
    int n, crimes = 0, police = 0, count = 0;
    cin >> n;
    while(n--){
        int event;
        cin >> event;
        if (event == -1) crimes++;
        else police += event;

        if(police >= crimes) {
            police = police - crimes;
            crimes = 0;
        } else {
            count++;
            crimes = 0;
        }

    }

    cout << count << endl;

    return 0;
}
