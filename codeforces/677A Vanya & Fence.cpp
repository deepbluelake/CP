#include <bits/stdc++.h>
using namespace std;


int main() {
    int n, h, tall = 0;
    cin >> n >> h;
    vector<int> V;

//taking input in a vector
    while (n--){
    int input;
    cin >> input;
    V.push_back(input);
    }

//accessing elemetns of the vector
    for(int g = 0; g < V.size(); g++){
        if(V[g] > h){
            tall++;
        }
    }

    int totalWidth = V.size() + tall;
    cout << totalWidth << endl;


    return 0;
}

