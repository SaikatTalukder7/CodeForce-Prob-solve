#include <bits/stdc++.h>
using namespace std;

int main()
{
    int w;
    cin >> w;

    if (w % 2 == 0 && w > 2)
        cout << "YES";
    else
        cout << "NO";

    return 0;
}

/*
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int w;
    cout << "Enter the weight of the watermelon: ";
    cin >> w;

    if (w % 2 == 0 && w > 2)
    {
        cout << "YES, the watermelon can be divided evenly." << endl;
    }
    else
    {
        cout << "NO, it can't be divided into two even positive parts." << endl;
    }
    return 0;
}
*/
