#include <iostream>

using namespace std;

int main()
{
    int a;
    string r;
    cin >> a;
    while (a--)
    {
        cin >> r;
        if (r.length() > 10)
        {
            cout << r[0] << r.length() - 2 << r[r.length() - 1] << endl;
        }
        else
        {
            cout << r << endl;
        }
    }
    return 0;
}