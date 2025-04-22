#include <iostream>
#include <vector>
using namespace std;

// Function to check if a number is a lucky number
bool isLucky(int num) {
    while (num > 0) {
        int digit = num % 10;
        if (digit != 4 && digit != 7) {
            return false;
        }
        num /= 10;
    }
    return true;
}

int main() {
    int n;
    cin >> n;

    // List of known lucky numbers under 1000
    vector<int> luckyNumbers;
    for (int i = 1; i <= 1000; ++i) {
        if (isLucky(i)) {
            luckyNumbers.push_back(i);
        }
    }

    // Check if the number n is almost lucky
    bool almostLucky = false;
    for (int lucky : luckyNumbers) {
        if (n % lucky == 0) {
            almostLucky = true;
            break;
        }
    }

    if (almostLucky) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
