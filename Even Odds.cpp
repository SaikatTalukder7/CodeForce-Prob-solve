#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n, k;
    cin >> n >> k;
    long long oldcount = (n + 1) / 2;

    if (k <= oldcount)
    {
        cout << 2 * k - 1 << endl;
    }
    else
    {
        cout << 2 * (k - oldcount) << endl;
    }
    return 0;
}
