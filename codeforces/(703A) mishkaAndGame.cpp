#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, mishkaRounds = 0, aanyaRounds = 0;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int diceMishka, diceAanya;
        cin >> diceMishka >> diceAanya;
        if (diceMishka > diceAanya) {
            mishkaRounds++;
        } else if (diceMishka < diceAanya) {
            aanyaRounds++;
        }
    }

    if (mishkaRounds > aanyaRounds) {
        cout << "Mishka" << endl;
    } else if (mishkaRounds < aanyaRounds) {
        cout << "Chris" << endl;
    } else {
        cout << "Friendship is magic!^^" << endl;
    }

    return 0;
}
