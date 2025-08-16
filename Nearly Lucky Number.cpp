#include <bits/stdc++.h>
using namespace std;

bool isLucky(long long x) {
    if (x == 0) return false;
    while (x > 0) {
        int d = x % 10;
        if (d != 4 && d != 7) return false;
        x /= 10;
    }
    return true;
}

int main() {
    string n;
    cin >> n;

    long long countLucky = 0;
    for (char c : n) {
        if (c == '4' || c == '7') countLucky++;
    }

    if (isLucky(countLucky)) cout << "YES\n";
    else cout << "NO\n";

    return 0;
}


/*
#include <bits/stdc++.h>
using namespace std;

bool isLucky(long long x) {
    if (x == 0) return false;
    while (x > 0) {
        int d = x % 10;
        if (d != 4 && d != 7) return false;
        x /= 10;
    }
    return true;
}

int main() {
    string n;
    cout << "Enter a number: ";
    cin >> n;

    long long countLucky = 0;
    for (char c : n) {
        if (c == '4' || c == '7') countLucky++;
    }

    cout << "Number of lucky digits = " << countLucky << endl;

    if (isLucky(countLucky))
        cout << "Result: YES (nearly lucky number)" << endl;
    else
        cout << "Result: NO (not nearly lucky)" << endl;

    return 0;
}
*/
