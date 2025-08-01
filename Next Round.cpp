#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    vector<int> scores(n);
    for (int i = 0; i < n; i++) {
        cin >> scores[i];
    }

    int threshold = scores[k - 1];
    int count = 0;

    for (int i = 0; i < n; i++) {
        if (scores[i] >= threshold && scores[i] > 0) {
            count++;
        }
    }

    cout << count << endl;

    return 0;
}


/*
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k;
    cout << "Enter number of participants (n) and k-th position: ";
    cin >> n >> k;

    vector<int> scores(n);
    cout << "Enter the scores of the participants in non-increasing order:\n";
    for (int i = 0; i < n; i++) {
        cin >> scores[i];
    }

    int threshold = scores[k - 1]; // Score of the k-th place
    int count = 0;

    for (int i = 0; i < n; i++) {
        if (scores[i] >= threshold && scores[i] > 0) {
            count++;
        }
    }

    cout << "Number of participants advancing to next round: " << count << endl;

    return 0;
}
*/
