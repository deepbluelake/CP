#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t; // Number of test cases

    while (t--) {
        int n;
        cin >> n; // Length of the array

        // Read the elements of the array
        vector<int> arr(n);
        for (int i = 0; i < n; ++i) {
            cin >> arr[i];
        }

        int longestBlankSpace = 0;
        int blankSpace = 0;

        // Iterate through the array
        for (int i = 0; i < n; ++i) {
            if (arr[i] == 0) {
                blankSpace++;
            } else {
                longestBlankSpace = max(longestBlankSpace, blankSpace);
                blankSpace = 0;
            }
        }

        // Update longestBlankSpace if blankSpace is greater at the end of the array
        longestBlankSpace = max(longestBlankSpace, blankSpace);

        // Output the result for this test case
        cout << longestBlankSpace << endl;
    }

    return 0;
}
