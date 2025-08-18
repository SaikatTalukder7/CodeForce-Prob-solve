#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    string s;
    cin >> s;

    int countA = 0, countD = 0;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == 'A') countA++;
        else if (s[i] == 'D') countD++;
    }

    if (countA > countD) cout << "Anton\n";
    else if (countD > countA) cout << "Danik\n";
    else cout << "Friendship\n";

    return 0;
}


