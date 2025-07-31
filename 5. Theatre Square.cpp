#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n, m, a;
    cin >> n >> m >> a;

    long long tiles_n = (n + a - 1) / a;
    long long tiles_m = (m + a - 1) / a;

    cout << tiles_n * tiles_m << endl;

    return 0;
}

/*
#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n, m, a;

    cout << "Enter the length of the Theatre Square (n): ";
    cin >> n;

    cout << "Enter the width of the Theatre Square (m): ";
    cin >> m;

    cout << "Enter the side length of one flagstone (a): ";
    cin >> a;

    // Calculate the number of tiles needed along both dimensions
    long long tiles_n = (n + a - 1) / a;
    long long tiles_m = (m + a - 1) / a;

    cout << "Minimum number of flagstones needed: " << tiles_n * tiles_m << endl;

    return 0;
}
*/
