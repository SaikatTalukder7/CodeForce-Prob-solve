#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, x = 0;
    cin >> n;

    for (int i = 0; i < n; i++) {
        string s;
        cin >> s;
        if (s.find("++") != string::npos)
            x++;
        else
            x--;
    }

    cout << x << endl;
    return 0;
}

/*
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, x = 0;
    cout << "Enter number of statements: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        string s;
        cout << "Enter statement " << i + 1 << ": ";
        cin >> s;

        if (s.find("++") != string::npos) {
            x++;
        } else {
            x--;
        }
    }

    cout << "Final value of x: " << x << endl;
    return 0;
}

*/
