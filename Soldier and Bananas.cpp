
#include <bits/stdc++.h>
using namespace std;

int main() {
    int k, n, w;
    cin >> k >> n >> w;

    int total_cost = k * w * (w + 1) / 2;
    int borrow = total_cost - n;

    if (borrow < 0) borrow = 0;
    cout << borrow << endl;

    return 0;
}

/*
#include <bits/stdc++.h>
using namespace std;

int main() {
    int k, n, w;

    cout << "Enter cost of first banana (k): ";
    cin >> k;
    cout << "Enter dollars you have (n): ";
    cin >> n;
    cout << "Enter number of bananas you want (w): ";
    cin >> w;

    // Calculate total cost using formula sum = w*(w+1)/2
    int total_cost = k * w * (w + 1) / 2;

    // Borrowing amount (can't be negative)
    int borrow = total_cost - n;
    if (borrow < 0) borrow = 0;

    cout << "You need to borrow: " << borrow << " dollars" << endl;

    return 0;
}
*/
