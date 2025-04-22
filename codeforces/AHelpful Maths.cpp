#include <bits/stdc++.h>
using namespace std;

int main() {
    int nums[100]; // Assuming the maximum length of the input string is 100
    string s;
    cin >> s;

    // Extracting numbers from the input string
    int index = 0;
    for (int i = 0; i < s.length(); i += 2) {
        nums[index++] = s[i] - '0'; // Convert character to integer
    }

    // Sorting the extracted numbers
    sort(nums, nums + index); // Sort from nums[0] to nums[index-1]

    // Reconstructing the sorted sum string
    string rearrangedSum;
    for (int i = 0; i < index; ++i) {
        rearrangedSum += to_string(nums[i]);
        if (i < index - 1) {
            rearrangedSum += '+';
        }
    }

    cout << rearrangedSum;

    return 0;
}
