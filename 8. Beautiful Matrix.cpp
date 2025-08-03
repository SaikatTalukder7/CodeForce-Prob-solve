#include <bits/stdc++.h>
using namespace std;

int main() {
    int mat[5][5], row, col;

    // Input the 5x5 matrix and find position of '1'
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            cin >> mat[i][j];
            if (mat[i][j] == 1) {
                row = i;
                col = j;
            }
        }
    }

    // Calculate minimum number of moves to center (2,2)
    int moves = abs(row - 2) + abs(col - 2);
    cout << moves << endl;

    return 0;
}

