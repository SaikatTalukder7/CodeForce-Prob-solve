#include <iostream>
using namespace std;

int main()
{
    int n, p, v, t, count = 0;
    cout << "enter number of problems: ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cout << "enter the views of Petya, Vasya, and Tonya: ";
        cin >> p >> v >> t;
        
        if (p + v + t >= 2)
        {
            count++;
        }
    }
    cout << "total number of problems they will solve: " << count << endl;
    return 0;
}
