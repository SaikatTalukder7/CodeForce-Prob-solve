#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        string word;
        cin >> word;

        if (word.length() > 10)
            cout << word[0] << word.length() - 2 << word[word.length() - 1] << "\n";
        else
            cout << word << "\n";
    }

    return 0;
}

/*
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cout << "Enter number of words: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        string word;
        cout << "Enter word " << i + 1 << ": ";
        cin >> word;

        if (word.length() > 10) {
            int middle = word.length() - 2;
            cout << "Short form: " << word[0] << middle << word[word.length() - 1] << endl;
        } else {
            cout << "Word is short: " << word << endl;
        }
    }

    return 0;
}
*/
