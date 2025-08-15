#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    int sumX = 0, sumY = 0, sumZ = 0;

    for (int i = 0; i < n; ++i) {
        int x, y, z;
        cin >> x >> y >> z;
        sumX += x;
        sumY += y;
        sumZ += z;
    }

    if (sumX == 0 && sumY == 0 && sumZ == 0)
        cout << "YES\n";
    else
        cout << "NO\n";

    return 0;
}

/*
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cout << "Enter number of forces: ";
    cin >> n;

    int sumX = 0, sumY = 0, sumZ = 0;
    for (int i = 0; i < n; ++i) {
        int x, y, z;
        cout << "Enter force vector " << i+1 << " (x y z): ";
        cin >> x >> y >> z;
        sumX += x;
        sumY += y;
        sumZ += z;
    }

    if (sumX == 0 && sumY == 0 && sumZ == 0)
        cout << "The body is in equilibrium: YES\n";
    else
        cout << "The body is NOT in equilibrium: NO\n";

    return 0;
}

*/
