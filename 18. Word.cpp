#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    int upperCount = 0, lowerCount = 0;
    for (char c : s) {
        if (isupper(c)) upperCount++;
        else lowerCount++;
    }

    if (upperCount > lowerCount) {
        for (char &c : s) c = toupper(c);
    } else {
        for (char &c : s) c = tolower(c);
    }

    cout << s << endl;
    return 0;
}


/*
#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;

    cout << "Enter a word: ";
    cin >> s;

    int upperCount = 0, lowerCount = 0;

    // Count uppercase and lowercase letters
    for (char c : s) {
        if (isupper(c))
            upperCount++;
        else
            lowerCount++;
    }

    // Convert based on counts
    if (upperCount > lowerCount) {
        for (char &c : s)
            c = toupper(c);
        cout << "Converted to uppercase: " << s << endl;
    } else {
        for (char &c : s)
            c = tolower(c);
        cout << "Converted to lowercase: " << s << endl;
    }

    return 0;
}
*/
