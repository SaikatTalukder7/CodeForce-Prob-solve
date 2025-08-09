#include <iostream>
using namespace std;

int main() {
    int n;
    string s;
    cin >> n >> s;
    int count = 0;
    for (int i = 0; i < n - 1; i++) {
        if (s[i] == s[i + 1]) {
            count++;
        }
    }
    cout << count << endl;
    return 0;
}

/*
#include <iostream>
using namespace std;

int main() {
    int n;
    string s;

    cout << "Enter the number of stones: ";
    cin >> n;

    cout << "Enter the stone colors (R, G, B): ";
    cin >> s;

    int count = 0;
    for (int i = 0; i < n - 1; i++) {
        if (s[i] == s[i + 1]) {
            count++;
        }
    }

    cout << "Minimum stones to remove: " << count << endl;
    return 0;
}
*/
