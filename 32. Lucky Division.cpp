#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    int lucky[] = {4,7,44,47,74,77,444,447,474,477,744,747,774,777};
    int size = 14;

    bool almostlucky = false;

    for(int i = 0; i < size; i++) {
        if(n % lucky[i] == 0) {
            almostlucky = true;
            break;
        }
    }

    if(almostlucky)
        cout << "YES";
    else
        cout << "NO";

    return 0;
}
