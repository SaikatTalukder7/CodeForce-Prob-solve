#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    vector<char> nums;
    for (int i = 0; i < s.size(); i += 2) {
        nums.push_back(s[i]);
    }

    sort(nums.begin(), nums.end());

    for (int i = 0; i < nums.size(); i++) {
        cout << nums[i];
        if (i != nums.size() - 1) {
            cout << "+";
        }
    }

    return 0;
}


/*
#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    vector<int> numbers;

    // Extract numbers from the string
    for (int i = 0; i < s.size(); i += 2) {
        numbers.push_back(s[i] - '0'); // convert char to int
    }

    // Sort the numbers in non-decreasing order
    sort(numbers.begin(), numbers.end());

    // Print the sorted sum
    for (int i = 0; i < numbers.size(); i++) {
        cout << numbers[i];
        if (i != numbers.size() - 1)
            cout << "+";
    }
    cout << endl;

    return 0;
}

*/
