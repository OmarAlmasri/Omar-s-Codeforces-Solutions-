//Code written by Omar-Ibrahim


#include <bits\stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long x;
        cin >> x;
        bool found = false;
        for (long long a = 1; a <= cbrt(x); a++)
        {
            long long b = cbrt(x - a * a * a);
            if (b * b * b + a * a * a == x && a != 0 && b != 0)
            {
                found = true;
                break;
            }
        }
        if (found)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}
