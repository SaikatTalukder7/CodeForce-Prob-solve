#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n; int k;
    cin >> n >> k;
    while (k--) {
        if (n % 10) n--;
        else n /= 10;
    }
    cout << n << "\n";
    return 0;
}

/*
#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n; int k;
    cout << "Enter n and k: ";
    cin >> n >> k;

    for (int i = 0; i < k; ++i) {
        if (n % 10 != 0) n--;
        else n /= 10;
    }

    cout << "Result: " << n << endl;
    return 0;
}
*/
