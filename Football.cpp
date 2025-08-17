#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    if (s.find("0000000") != string::npos || s.find("1111111") != string::npos)
        cout << "YES\n";
    else
        cout << "NO\n";

    return 0;
}


/*
#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cout << "Enter the players' positions (0s and 1s): ";
    cin >> s;

    if (s.find("0000000") != string::npos || s.find("1111111") != string::npos)
        cout << "Situation: YES (dangerous)" << endl;
    else
        cout << "Situation: NO (not dangerous)" << endl;

    return 0;
}
*/
