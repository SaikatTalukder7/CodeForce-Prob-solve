#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    string vowels = "aoyeuiAOYEUI";
    string result = "";

    for (char c : s) {
        if (vowels.find(c) == string::npos)
        { // not a vowel
            result += '.';
            result += tolower(c);
        }
    }
    cout << result << endl;
    return 0;
}


/*
#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    string vowels = "aoyeuiAOYEUI";
    string result = "";

    cout << "Enter a string: "; // prompt for user
    cin >> s;

    for (char c : s) {
        // check if NOT a vowel
        if (vowels.find(c) == string::npos) {
            result += '.';
            result += tolower(c); // convert to lowercase
        }
    }

    cout << "Processed string: " << result << endl; // prompt for output
    return 0;
}


*/
