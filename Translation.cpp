#include <bits/stdc++.h>
using namespace std;

int main() {
    string s, t;
    cin >> s >> t;

    reverse(s.begin(), s.end());

    if (s == t) cout << "YES\n";
    else cout << "NO\n";

    return 0;
}


/*
#include <bits/stdc++.h>
using namespace std;

int main() {
    string s, t;
    cout << "Enter the original word (Berlandish): ";
    cin >> s;
    cout << "Enter the translated word (Birlandish): ";
    cin >> t;

    string reversed_s = s;
    reverse(reversed_s.begin(), reversed_s.end());

    cout << "Reversed original word: " << reversed_s << endl;

    if (reversed_s == t)
        cout << "Result: YES (translation is correct)" << endl;
    else
        cout << "Result: NO (translation is incorrect)" << endl;

    return 0;
}
*/
