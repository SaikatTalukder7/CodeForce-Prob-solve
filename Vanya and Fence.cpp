#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, h;
    cin >> n >> h;
    int width = 0;
    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;
        if (a > h) width += 2;
        else width += 1;
    }
    cout << width << "\n";
    return 0;
}


/*
#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, h;
    cout << "Enter number of friends and fence height: ";
    cin >> n >> h;

    int width = 0;
    cout << "Enter the heights of friends: ";
    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;
        if (a > h) width += 2;
        else width += 1;
    }

    cout << "Minimum width of the road: " << width << "\n";
    return 0;
}

*/
