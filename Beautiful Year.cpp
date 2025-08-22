#include <iostream>
using namespace std;

bool distinct(int y) {
    int seen[10] = {0};
    while (y > 0) {
        int d = y % 10;
        if (seen[d]) return false;
        seen[d] = 1;
        y /= 10;
    }
    return true;
}

int main() {
    int y;
    cin >> y;
    while (true) {
        ++y;
        if (distinct(y)) {
            cout << y << "\n";
            break;
        }
    }
    return 0;
}

/*
#include <iostream>
using namespace std;

bool distinct(int y) {
    int seen[10] = {0};
    while (y > 0) {
        int d = y % 10;
        if (seen[d]) return false;
        seen[d] = 1;
        y /= 10;
    }
    return true;
}

int main() {
    int y;
    cout << "Enter year: ";
    cin >> y;

    while (true) {
        ++y;
        if (distinct(y)) {
            cout << "The next beautiful year is: " << y << "\n";
            break;
        }
    }
    return 0;
}

*/
