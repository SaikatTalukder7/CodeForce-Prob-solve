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

/*
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of games played: ";
    cin >> n;

    string s;
    cout << "Enter the results string (A for Anton, D for Danik): ";
    cin >> s;

    int countA = 0, countD = 0;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == 'A') countA++;
        else if (s[i] == 'D') countD++;
    }

    cout << "Anton won: " << countA << " games" << endl;
    cout << "Danik won: " << countD << " games" << endl;

    if (countA > countD) cout << "Winner: Anton" << endl;
    else if (countD > countA) cout << "Winner: Danik" << endl;
    else cout << "Winner: Friendship" << endl;

    return 0;
}
*/

