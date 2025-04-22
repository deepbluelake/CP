#include <bits/stdc++.h>
using namespace std;

bool isConsonant(char c) {
    c = toupper(c); // Convert to uppercase for comparison
    return !(c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U' || c == 'Y' || !isalpha(c));
}

string processString(const string& input) {
    string result;

    for (char ch : input) {
        if (isConsonant(ch)) {
            result += '.';
            result += tolower(ch);
        }
    }

    return result;
}

int main() {
    string s;
    cin >> s;

    string result = processString(s);
    cout << result << endl;

    return 0;
}

//better version 

// int main() {
    
//     string s;
//     cin >> s;
    
//     for(int i=0; i<s.length(); i++){
//         char si = tolower(s[i]);
//         if(si == 'a' || si == 'e' || si == 'i' || si == 'o' || si == 'u' || si == 'y')
//         {
//             continue;
//         }
        
//         cout << "." << si;
//     }
    
//     return 0;
// }