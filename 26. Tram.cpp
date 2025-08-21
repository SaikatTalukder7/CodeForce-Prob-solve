#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    int current = 0, capacity = 0;

    for (int i = 0; i < n; i++) {
        int a, b;
        cin >> a >> b;
        current -= a;      // passengers exit
        current += b;      // passengers enter
        capacity = max(capacity, current);
    }

    cout << capacity << "\n";
    return 0;
}


/*
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cout << "Enter number of stops: ";
    cin >> n;

    int current = 0, capacity = 0;

    cout << "Enter exit and enter passengers for each stop:\n";
    for (int i = 0; i < n; i++) {
        int a, b;
        cin >> a >> b;
        current -= a;   // passengers exit first
        current += b;   // then new passengers enter
        capacity = max(capacity, current);  // track max passengers inside
    }

    cout << "Minimum capacity needed: " << capacity << "\n";
    return 0;
}

*/
